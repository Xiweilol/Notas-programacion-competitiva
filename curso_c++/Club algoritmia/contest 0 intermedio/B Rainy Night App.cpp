#include <bits/stdc++.h>

using namespace std;

int n,m,contador;

const int maxn = 2e5 + 5;

vector <int> adj[maxn];
vector <int> componente(maxn);

bool visi[maxn];
void dfs(int u){

    if(visi[u]) return;

    //marcar visitado
    visi[u] = true;

    //aqui asigna un numero a un grafo conectado,
    //osea de un mismo grupo
    //si se interrumpe, significa que el nodo ya es de otro grupo
    componente[u] = contador;

    for(int v : adj[u]){
        dfs(v);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int u,v; cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //empezamos a marcar en el vector componente
    //se va ir pintando todo, los que se interrumpe
    //significa que son de otro grupo
    for(int i = 1; i <= n; i++){
        if(!visi[i]){
            contador++;
            dfs(i);
        }
    }

    int q; cin >> q;

    while(q--){
        int a,b; cin >> a >> b;

        cout << (componente[a] == componente[b] ? "YES" : "NO") << "\n";
    }



}