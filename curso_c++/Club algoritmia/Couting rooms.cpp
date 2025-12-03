// Autor: Mintwi
// Fecha: 2025-12-03

#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool valid(int x,int y, int n, int m){
    return x >= 0 && x < n && y >= 0 && y < m;
}
void dfs(vector <vector<int>>& vis,vector <vector<char>>& v,int i, int j, int n, int m){
    vis[i][j] = 1;
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};

    for(int k = 0; k < 4; k++){
        if(valid(i+dx[k],j+dy[k],n,m) && v[i+dx[k]][j+dy[k]] == '.' && vis[i+dx[k]][j+dy[k]] != 1){
            dfs(vis,v,i+dx[k],j+dy[k],n,m);
        }
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int ans = 0;
    int n,m; cin >> n >> m;


    vector <vector<int>> vis(n,vector<int>(m,0));

    vector <vector<char>>v(n,vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '.' && vis[i][j] != 1){
                dfs(vis,v,i,j,n,m);
                ans++;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}