// Autor: Mintwi
// Fecha: 2026-01-27

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a0,a1,a2,a3;
        cin >> a0 >> a1 >> a2 >> a3;

        int mn = min({a0,a1,a2,a3});
        int mx = max({a0,a1,a2,a3});

        bool ok = (a0 == mn && a3 == mx) || (a3 ==mn && a0 == mx) || (a1 == mn && a2 == mx) ||(a2 == mn && a1 == mx);

        cout << (ok ? "YES\n" : "NO\n");
                
        
    }

    return 0;
}