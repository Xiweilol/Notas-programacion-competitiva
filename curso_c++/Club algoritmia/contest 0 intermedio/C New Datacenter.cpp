#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int n,m,d;

const int maxn = 2e5 + 5;

vector <int> adj[maxn];
bool visi[maxn];
queue <int> cola;
int num;
//controlamos el nivel con un arreglo
int dist[maxn];

int q;

vector <int> puntosPartida;
void bfs(){
    //el primer elemento, osea donde inicia, debe de insertarse primero
    for(int d : puntosPartida){
        cola.push(d);
        visi[d] = true;
        dist[d] = 1;
    }
    while(!cola.empty()){
        int u = cola.front(); cola.pop();
        for(int v : adj[u]){
            //si nunca lo habiamos encontrado, lo aumentamos el nivel que esta, y lo pusheamos
            if(!visi[v]){
                //aumentamos un nivel, es evidente que debe de ser su nivel anterior mas 1
                dist[v] = dist[u] + 1;
                visi[v] = true;
                cola.push(v);
            }
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int u,v; cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> d;
        puntosPartida.push_back(d);
    }

    bfs();

    int mx = INT_MIN;

    
    //buscar el nivel maximo
    for(int i = 1; i <= n; i++) mx = max(mx,dist[i]);

   
    // for(int i = 1; i <= n; i++){
    //     cout << "se supone que es el nodo: " << i << " tiene nivel : " << dist[i] << "\n";

    // }
    //buscar coincidencia de nivel maximo, imprimir donde esta
    int cnt = 0;
    vector <int> ans;
    //el i es el nodo
    for(int i = 1; i <= n; i++){
        if(dist[i] == mx){
            cnt++;
            ans.push_back(i);
        }
    }

    cout << cnt << "\n";

    for(int u : ans){
        cout << u << " ";
    }
    cout << "\n";
    // for(int i = 1; i <= n; i++){
    //     cout << "Rutas " << i << ": ";
    //     for(int v : adj[i]){
    //         cout << v << " ";
    //     }

    //     cout << "\n";
    // }


}