// Autor: Mintwi
// Fecha: 2026-05-18
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;

bool bfs(int a, int b, vector<vector<int>>& adj){
    vector <bool> vis(adj.size(),false);

    queue <int> cola;
    cola.push(a);

    vis[a] = true;

    while(!cola.empty()){

        int u = cola.front();

        cola.pop();

        //si existe un ciclo para este grafo
        if(u == b) return true;

        for(int v : adj[u]){
            if(!vis[v]){
                vis[v] = true;
                cola.push(v);
            }
        }
        
    }

    return false;

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <vector<int>> adj(2*n + 5);
        vector <int> ans;
        for(int i = 1; i <= n; i++){

        
            int a,b; cin >> a >> b;

            if(bfs(a,b,adj)){
                continue;
            }

            adj[a].push_back(b);
            adj[b].push_back(a);

            ans.push_back(i);
        }


        cout << ans.size() << "\n";

        for(int res : ans){
            cout << res << " ";
        }

        cout << "\n";
        
    }

    return 0;
}