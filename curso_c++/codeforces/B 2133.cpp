// Autor: Mintwi
// Fecha: 2025-11-16

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> g(n);

        for(int i = 0; i < n; i++){
            cin >> g[i];
        }

        sort(g.rbegin(),g.rend());

        ll ans = 0;
        for(int i = 0; i < n; i += 2){
            ans += g[i];
        }

        cout << ans << "\n";
    }

    return 0;
}