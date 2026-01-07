#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        
        vector<char> seen(n + 1, 0);
        for (int x : a) if (0 <= x && x <= n) seen[x] = 1;

        int M = 0;
        while (M <= n && seen[M]) M++;

        cout << min(M, k - 1) << "\n";
    }
    return 0;
}
