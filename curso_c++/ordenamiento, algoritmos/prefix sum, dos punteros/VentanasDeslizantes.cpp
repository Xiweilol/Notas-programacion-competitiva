#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; 
    if (!(cin >> n >> k)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    if (k > n) { cout << "No existe ventana\n"; return 0; }

    long long suma = 0;
    for (int i = 0; i < k; ++i) suma += a[i];  // primera ventana

    long long best = suma;   // mínima suma encontrada
    int bestL = 0;           // inicio (0-based) de la mejor ventana

    for (int i = k; i < n; ++i) {
        suma += a[i] - a[i - k];          // entra a[i], sale a[i-k]
        if (suma < best) {
            best = suma;
            bestL = i - k + 1; // saca la base con indice base a 0
        }
    }

    cout << best << "\n";                 // suma mínima
    // Si quieres también los índices:
    // cout << bestL << " " << (bestL + k - 1) << "\n";
    return 0;
}
