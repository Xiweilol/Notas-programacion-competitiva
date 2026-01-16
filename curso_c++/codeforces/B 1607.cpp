// Autor: Mintwi
// Fecha: 2026-01-15

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll x0,n; cin >> x0 >> n;

        ll D = 0;
        // por cada 4, se repite el ciclo
        ll r = n % 4;

        if(r == 1){
            D = -n;
        } else if(r == 2){
            D = 1;
        } else if(r == 3){
            D = n+1;
        }

        ll ans;
        if(x0 % 2 == 0){
            ans = x0 + D;
        } else {
            ans = x0 - D;
        }

        cout << ans << "\n";
    }

    return 0;
}