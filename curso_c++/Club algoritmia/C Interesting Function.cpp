// Autor: Mintwi
// Fecha: 2026-02-06

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll l,r; cin >> l >> r;

        ll ans = 0;
        while(l > 0 || r > 0){
            ans += r - l;

            r /= 10;
            l /= 10;
        }

        cout << ans << "\n";
    }

    return 0;
}