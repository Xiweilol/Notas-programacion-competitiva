#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int n,m;

const int maxn = 1000 + 5;
char rooms[maxn][maxn];
bool visi[maxn][maxn];

bool valid(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

//pasamos las coordenadas donde encontro el punto
void dfs(int x, int y){
    //verificar si ya fue visitado
    visi[x][y] = true;

    //para controlar el movimiento
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,1,-1}; 
    //cout << "Aqui estas";
    //por cada punto, vamos a buscar izquierda,derecha,abajo y arriba si existe un punto
    for(int i = 0; i < 4; i++){
        int tempx = x + dx[i], tempy = y + dy[i];
        if(valid(tempx,tempy) && rooms[tempx][tempy] == '.' && !visi[tempx][tempy]){
            dfs(tempx,tempy);
            //cout << "AQUI?";
        }
    }
}
int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> rooms[i][j];
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(rooms[i][j] == '.' && !visi[i][j]){
                //cout << "Aqui estas?";
                dfs(i,j);
                ans++;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}
