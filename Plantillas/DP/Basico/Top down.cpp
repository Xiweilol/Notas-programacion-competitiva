// Autor: Mintwi
// Tema: Plantilla base de DP (Top-Down)
// Descripción: DP recursiva con memoización

#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
vector<long long> a;
vector<long long> dp;

long long solve(int i) {
    // Caso base
    if (i == 0) return 0;
    if (i == 1) return a[1];

    // Si ya está calculado, devolvemos el valor guardado
    if (dp[i] != -1) return dp[i];

    // Transición (ejemplo tipo "máxima suma sin consecutivos")
    long long op1 = solve(i - 1);
    long long op2 = solve(i - 2) + a[i];

    return dp[i] = max(op1, op2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    a.assign(n + 1, 0);
    dp.assign(n + 1, -1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    cout << solve(n) << "\n";
}
