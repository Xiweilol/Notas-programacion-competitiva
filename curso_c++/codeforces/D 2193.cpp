// Autor: Mintwi
// Fecha: 2026-01-25
/*SOLUCION IAAAAA*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<long long> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        // Prefijos de b: pref[i] = b1 + ... + bi
        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + b[i - 1];

        // Ordenamos fuerzas desc para evaluar x = a_sorted[j-1]
        sort(a.begin(), a.end(), greater<long long>());

        long long ans = 0;

        for (int j = 1; j <= n; j++) {
            long long x = a[j - 1];   // dificultad elegida
            long long cnt = j;        // #espadas con fuerza >= x

            // k = max índice tal que pref[k] <= cnt
            int k = int(upper_bound(pref.begin(), pref.end(), cnt) - pref.begin()) - 1;

            ans = max(ans, x * 1LL * k);
        }

        cout << ans << "\n";
    }

    return 0;
}