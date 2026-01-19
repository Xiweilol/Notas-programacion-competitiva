// Autor: Mintwi
// Fecha: 2026-01-19

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll a,b; cin >> a >> b;

        if(a==b){
            cout << 0 << " " << 0 << "\n";
        } else{
            ll ans = abs(a-b);
            ll m= min(a%ans, ans-b%ans);
            cout << ans << " " << m << "\n";
        }
    }

    return 0;
}