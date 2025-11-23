// Autor: Mintwi
// Fecha: 2025-11-21

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int a, b;
        ll x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << "\n";
            continue;
        }

        // Caso b < a
        if (b < a) {
            if ((a ^ 1) == b) cout << y << "\n";
            else cout << -1 << "\n";
            continue;
        }

        int d = b - a;
        ll mn = min(x, y);
        ll lf = d / 2;         // floor(d/2)
        ll lc = (d + 1) / 2;   // ceil(d/2)

        ll ans;
        if (a % 2 == 0) { // a par
            ans = lc * mn + lf * x;
        } else {          // a impar
            ans = lf * mn + lc * x;
        }

        cout << ans << "\n";
    }

    return 0;
}
