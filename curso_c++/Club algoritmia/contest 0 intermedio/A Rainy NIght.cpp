#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int maxn = 2e5 + 5;

vector <int> adj[maxn];

bool visi[maxn];

//vamos a pasar un busqueda de fundidad, empezamos desde la a
void dfs(int u){

    //si ya fue visitado, ya no hagamos nada
    if(visi[u]) return;
    //marcamos que ya fue visitado
    visi[u] = true;


    //iteramos a todo los nodos que esta conectado al no
    for(int v : adj[u]){
        dfs(v);
    }


}
int n,m,a,b;

int main(){
    cin >> n >> m;
    cin >> a >> b;

    for(int i = 0; i < m; i++){
        int u,v; cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(a);

    cout << (visi[b] ? "YES" : "NO") << "\n";



    // for(int i = 1; i <= n; i++){
    //     cout << "Lista de " << i << " :";
    //     for(auto c : arr[i]){
    //         cout << c << " ";
    //     }

    //     cout << "\n";
    // }
}
