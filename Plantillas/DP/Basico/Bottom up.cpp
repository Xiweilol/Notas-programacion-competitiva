// Autor: Mintwi
// Tema: Plantilla base de DP (Bottom-Up)
// Descripción: Estructura general para resolver problemas de DP iterativa

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n; // tamaño del problema, por ejemplo cantidad de elementos

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i]; // entrada de datos (si aplica)

    // Paso 1: crear dp con valor neutro
    vector<long long> dp(n + 1, 0);

    // Paso 2: definir casos base
    dp[0] = 0;
    dp[1] = a[1];  // depende del problema, ejemplo clásico

    // Paso 3: transición
    for (int i = 2; i <= n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]); // ejemplo tipo "no tomar consecutivos"
    }

    // Paso 4: salida final
    cout << dp[n] << "\n";
}
