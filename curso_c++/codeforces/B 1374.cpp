// Autor: Mintwi
// Fecha: 2026-02-09

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;

        if(n == 1){
            cout << 0 << "\n";
            continue;
        }

        if(n == 2 || (n % 2 != 0 && n % 3 != 0) || (n != 36 && n % 12 == 0)){
            cout << -1 << "\n";
            continue;
        }

        ll ans = 0;

        while(n != 1){
            if(n==6){
                n /= 6;
            } else if(n >= 36 && n % 6 == 0){
                n /= 6;
            } else{
                n *= 2;
            }

            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}