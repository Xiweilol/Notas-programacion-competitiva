#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m; 
    // n = número de nodos
    // m = número de aristas

    // Lista de adyacencia
    // g[u] guarda todos los vecinos del nodo u
    vector<vector<int>> g(n + 1);

    // Leemos las aristas
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u); 
        // ↑ quita esta línea si el grafo es dirigido
    }

    int start;
    cin >> start; // nodo inicial

    // dist[i] = distancia mínima desde start hasta i
    // -1 significa "no visitado"
    vector<int> dist(n + 1, -1);

    queue<int> q; // cola para BFS

    // Inicializamos BFS
    dist[start] = 0; // distancia a sí mismo es 0
    q.push(start);   // metemos el nodo inicial

    // BFS clásico
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        // Recorremos todos los vecinos de u
        for (int v : g[u]) {
            // Si no ha sido visitado
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1; // nivel + 1
                q.push(v);             // lo metemos a la cola
            }
        }
    }

    // Ejemplo: imprimir distancias
    for (int i = 1; i <= n; i++) {
        cout << "dist[" << i << "] = " << dist[i] << "\n";
    }

    return 0;
}
