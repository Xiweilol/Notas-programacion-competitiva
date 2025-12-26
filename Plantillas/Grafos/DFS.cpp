#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g; // lista de adyacencia
vector<int> vis;       // vis[i] = 1 si ya fue visitado

void dfs(int u) {
    // Marcamos el nodo actual como visitado
    vis[u] = 1;

    // cout << u << " "; // (opcional) para ver el orden

    // Visitamos todos los vecinos
    for (int v : g[u]) {
        if (!vis[v]) {   // si no ha sido visitado
            dfs(v);      // bajamos más profundo
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // Inicializamos el grafo
    g.assign(n + 1, {});

    // Leemos las aristas
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u); 
        // quita esta línea si es dirigido
    }

    int start;
    cin >> start;

    // Inicializamos visitados
    vis.assign(n + 1, 0);

    // Llamamos DFS desde start
    dfs(start);

    /* DFS Iterativo
    stack<int> st;
st.push(start);
vis[start] = 1;

while (!st.empty()) {
    int u = st.top();
    st.pop();

    for (int v : g[u]) {
        if (!vis[v]) {
            vis[v] = 1;
            st.push(v);
        }
    }
}

    */
    return 0;
}
