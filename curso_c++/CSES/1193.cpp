#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int maxn = 1000+5;
char maps[maxn][maxn];
int dist[maxn][maxn];
int n,m;
int Ax,Ay;
int Bx,By;
queue <pair<int,int>> cola;
bool visi[maxn][maxn];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char pasos[maxn][maxn];
char p[4] = {'D','U','R','L'};

bool valid(int x,int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(int xs, int ys){
    cola.push({xs,ys});
    dist[xs][ys] = 0;
    visi[xs][ys] = true;

    while(!cola.empty()){
        auto temp = cola.front();
        cola.pop();
        int x = temp.first;
        int y = temp.second;
        for(int i = 0; i < 4; i++){
            int tempx = x + dx[i], tempy = y + dy[i];

            if(valid(tempx,tempy) && !visi[tempx][tempy] && (maps[tempx][tempy] == '.' || maps[tempx][tempy] == 'B')){
                //registrar passo que como fuimos llegando
                pasos[tempx][tempy] = p[i];
                //aumentar el nivel
                dist[tempx][tempy] = dist[x][y] + 1;
                visi[tempx][tempy] = true;

                cola.push({tempx,tempy});
            }
        }

    }

}
int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> maps[i][j];

            if(maps[i][j] == 'A'){
                Ax = i; Ay = j;
            } else if(maps[i][j] == 'B'){
                Bx = i; By = j;
            }
        }
    }

    bfs(Ax,Ay);

    if(!visi[Bx][By]){
        cout << "NO\n";
    } else {
        cout << "YES\n";

        string rr = "";

        int x = Bx, y =By;

        while(x != Ax || y != Ay){
            rr.push_back(pasos[x][y]);

            //si es U entonces cuando regresa lo mete hacia abajo
            if(pasos[x][y] == 'U') x++;
            else if(pasos[x][y] == 'D') x--;
            else if(pasos[x][y] == 'L') y++;
            else if(pasos[x][y] == 'R') y--;
        }

        cout << rr.size() << "\n";
        reverse(rr.begin(),rr.end());
        cout << rr << "\n";

    }

}