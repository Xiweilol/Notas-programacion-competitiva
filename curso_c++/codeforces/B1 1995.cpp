// Autor: Mintwi
// Fecha: 2025-11-27

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

        vector <ll> a(n);

        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }


        sort(a.begin(),a.end());
        ll sum = 0, l = 0, r = 0, ans = 0;

        while(r < n){
            sum += a[r];
            //cuando no cumple, movemos izquierda
            while( l <= r && (sum > m || a[r] - a[l] > 1)){
                sum -= a[l];
                l++;
            }

            ans = max(ans,sum);

            r++;
        }

        cout << ans << "\n";
    }

    return 0;
}