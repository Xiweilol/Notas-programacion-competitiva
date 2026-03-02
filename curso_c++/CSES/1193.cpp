#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int maxn = 1000 + 5;

int n,m;

queue <pair<int,int>> cola;

char mapa[maxn][maxn];

int Ax,Ay,Bx,By;

bool visi[maxn][maxn];
char camino[maxn][maxn];

//registrar los niveles
int dist[maxn][maxn];

//movimiento
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

char pasos[4] = {'D','U','R','L'};

bool valid(int x,int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}
void bfs(){
    visi[Ax][Ay] = true;
    //empezamos en el nivel cero
    dist[Ax][Ay] = 0;
    cola.push({Ax,Ay});

    while(!cola.empty()){
        auto temp = cola.front();
        cola.pop();
        int x = temp.first;
        int y = temp.second;

        for(int i = 0; i < 4; i++){
            //por cada nodo vamos a ir buscando sus vecinos
            int tempx = x + dx[i], tempy = y + dy[i];

            if(valid(tempx,tempy) && !visi[tempx][tempy] && mapa[tempx][tempy] != '#'){
                visi[tempx][tempy] = true;
                cola.push({tempx,tempy});
                dist[tempx][tempy] = dist[x][y] + 1;
                camino[tempx][tempy] = pasos[i];
            }
        }
    }


}
int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mapa[i][j];

            if(mapa[i][j] == 'A'){
                Ax = i; Ay = j;
            } else if(mapa[i][j] == 'B'){
                Bx = i; By = j;
            }
        }
    }

    bfs();

    if(!visi[Bx][By]){
        cout << "NO" << "\n";
    } else {
        cout << "YES\n";

        string chido = "";

        int x = Bx, y = By;

        while(x != Ax || y != Ay){
            chido.push_back(camino[x][y]);
            if(camino[x][y] == 'U') x++;
            else if(camino[x][y] == 'D') x--;
            else if(camino[x][y] == 'L') y++;
            else if(camino[x][y] == 'R') y--;
        }

        cout << chido.size() << "\n";

        reverse(chido.begin(),chido.end());

        cout << chido << "\n";
    }

    return 0;
}