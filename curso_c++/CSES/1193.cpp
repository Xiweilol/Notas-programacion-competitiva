#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int maxn = 1000+5;
char maps[maxn][maxn];
int dist[maxn][maxn];
int n,m;
int Ax,Ay;
int Bx,By;
queue <int> cola;


void bfs(int ax, int ay){
    
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


}