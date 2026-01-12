// Autor: Mintwi
// Fecha: 2026-01-12

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


/*
hacer prefix sum, ya que si hace cambio en un rango, se cambia todo,
solamente tenemos que sumar lo que se cambio y restar lo que estaba y ya
*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,q; cin >> n >> q;

        vector <ll> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        vector <ll> pref(n+1,0);

        
        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + a[i];
        }
        
        // for(auto f : pref){
        //     cout << f << " ";
        // }

        while(q--){
            ll l,r,k; cin >> l >> r >> k;

            ll ans = pref[n] + ((r-l+1) * k) - (pref[r] - pref[l-1]);

            if(ans & 1){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}