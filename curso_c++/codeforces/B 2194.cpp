// Autor: Mintwi
// Fecha: 2026-05-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        ll x,y; cin >> x >> y;

        vector <ll> a(n);
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];

            //sacar que puede aportar cada banco
            sum += a[i] / x;
        }

        ll ans = -1111;
        for(int i = 0; i < n; i++){
            ll temp = sum - (a[i]/x);
            ans = max(ans,a[i] + y * temp);
        }

        cout << ans << "\n";
    }

    return 0;
}