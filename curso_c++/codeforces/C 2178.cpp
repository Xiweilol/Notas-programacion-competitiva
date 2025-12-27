// Autor: Mintwi (style)
// Solución O(n) por test
// Idea: DP con mejor valor "best" = max(dp[i] + a[i] + pref[i])
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n + 1), pref(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
        }

        // dp[j] = max X posible justo cuando aj se vuelve el "primero" (jefe)
        // dp[1] = 0 (al inicio el jefe es a1 y X empieza en 0)
        const ll NEG_INF = (ll)-4e18;
        vector<ll> dp(n + 1, NEG_INF);
        dp[1] = 0;

        // best = max_{i<j} (dp[i] + a[i] + pref[i])
        ll best = dp[1] + a[1] + pref[1];

        // Calculamos dp[j] para j>=2
        for (int j = 2; j <= n; j++) {
            // dp[j] = best - pref[j-1]
            dp[j] = best - pref[j - 1];

            // actualizamos best con i = j para futuros estados
            // best = max(best, dp[j] + a[j] + pref[j])
            best = max(best, dp[j] + a[j] + pref[j]);
        }

        // Si el que queda sin asignar es L:
        // todo lo de (L+1..n) se quita como "segundo" => resta sum(a[L+1..n])
        // X = dp[L] - (pref[n] - pref[L])
        ll ans = NEG_INF;
        for (int L = 1; L <= n; L++) {
            ll tail = pref[n] - pref[L];   // suma de lo que queda a la derecha
            ans = max(ans, dp[L] - tail);
        }

        cout << ans << "\n";
    }
    return 0;
}
