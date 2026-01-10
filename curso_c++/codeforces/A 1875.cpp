// Autor: Mintwi
// Fecha: 2026-01-09

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll a,b; int n;

        cin >> a >> b >> n;

        vector <ll> arr(n);

        for(int i = 0; i < n; i++){
            ll x; cin >> x;

            if(x >= a){
                x = a - 1;
            }

            arr[i] = x;
        }


        if(a == 1){
            cout << b << "\n";
            continue;
        }
        ll ans = accumulate(arr.begin(),arr.end(),b);

        cout << ans << "\n";
    }

    return 0;
}