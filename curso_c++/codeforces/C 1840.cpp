// Autor: Mintwi
// Fecha: 2026-02-13
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n,k,q; cin >> n >> k >> q;

        vector <ll> a(n);

        ll ans = 0;
        ll len = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            if(a[i] <= q){
                len++;
            } else {
                if(len >= k){
                    // una formula todo rancio para sacar en cada segmentos consecutivos cuantas posibilidades hay
                    ans += (((len - k + 1) * (len - k + 2)) + 1) / 2;
                }
                len = 0;
            }
        }
        // considerar del ultimo segmento valido

        if(len >= k){
            ans += (((len - k + 1) * (len - k + 2)) + 1) / 2;
        }
        cout << ans << "\n";
    }

    return 0;
}