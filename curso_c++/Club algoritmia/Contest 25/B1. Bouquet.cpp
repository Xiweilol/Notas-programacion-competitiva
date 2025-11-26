// Autor: Mintwi
// Fecha: 2025-11-25

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll m; cin >> m;

        map <ll,ll> freq;
        set <ll> S;
        for(int i = 0; i < n; i++){
            ll a; cin >> a;

            freq[a]++;

            S.insert(a);
        }

        ll ans = 0;

        for (auto &x : S) {
            ll x1 = freq[x];        
            ll x2 = freq[x + 1];    

            //ir tomando el x + 1 petalos desde valor 0 hasta su maxima
            for (ll b = 0; b <= x2; ++b) {
                ll costob = (x + 1) * b;
                if (costob > m) break;

                //lo que queda de m despues de costar el de x+1
                //son los que podemos tomar para el x
                ll sobra = m - costob;
                ll costoa = x * min(x1, sobra / x);   

                //calcular el total y sacar el maximo
                ll totalPetals = costoa + costob;
                ans = max(ans, totalPetals);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}