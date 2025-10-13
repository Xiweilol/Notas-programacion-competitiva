#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // probamos contenedores
    vector<int> v = {1, 2, 3, 4, 5};
    set<int> s(v.begin(), v.end());
    map<int, string> m = {{1, "uno"}, {2, "dos"}, {3, "tres"}};

    // algoritmos
    reverse(v.begin(), v.end());
    int suma = accumulate(v.begin(), v.end(), 0);

    // output
    cout << "Vector invertido: ";
    for (int x : v) cout << x << " ";
    cout << "\nSuma: " << suma << "\n";

    cout << "Elementos en el set: ";
    for (int x : s) cout << x << " ";
    cout << "\n";

    cout << "Mapa: ";
    for (auto &[k, v] : m) cout << k << "->" << v << " ";
    cout << "\n";

    // string y utilidad
    string frase = "programacion competitiva";
    sort(frase.begin(), frase.end());
    cout << "Cadena ordenada: " << frase << "\n";

    // pruebas matemáticas
    cout << "Raíz cuadrada de 16 = " << sqrt(16) << "\n";
    cout << "Seno de 30° = " << sin(30 * M_PI / 180) << "\n";

    return 0;
}
