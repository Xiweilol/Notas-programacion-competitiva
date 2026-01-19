#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;

    if (a % 2 != 0 && b % 2 != 0) {
        // Caso 1: Ambos impares
        cout << a * b + 1 << "\n";
    } 
    else if (b % 2 == 0) {
        // Caso 2: b es par
        if (a % 2 == 0) {
            // a es par, b es par
            ll res2 = a * (b / 2) + 2;
            cout << res2 << "\n";
        } else {
            // a es impar, b es par
            if (b % 4 == 0) {
                // Necesitamos k par y b/k par -> b debe ser múltiplo de 4
                ll res1 = 2 * a + b / 2;
                ll res2 = a * (b / 2) + 2;
                cout << max(res1, res2) << "\n";
            } else {
                cout << "-1\n";
            }
        }
    } 
    else {
        // Caso 3: a par, b impar -> Imposible obtener suma par
        cout << "-1\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}