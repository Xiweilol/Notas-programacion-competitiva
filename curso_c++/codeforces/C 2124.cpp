// Autor: Mintwi
// Fecha: 2026-01-26
/*IA*/
#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

// lcm(a,b) = a/gcd(a,b)*b (en este orden para reducir overflow)
static inline int64 lcm_ll(int64 a, int64 b) {
    return a / std::gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int64> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        int64 x = 1;
        for (int i = 0; i + 1 < n; i++) {
            int64 g = std::gcd(b[i], b[i + 1]);
            int64 need = b[i] / g;          // b_i / gcd(b_i, b_{i+1})
            x = lcm_ll(x, need);
        }

        cout << x << "\n";
    }
    return 0;
}
