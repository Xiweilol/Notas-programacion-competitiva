// Autor: Mintwi
// Fecha: 2026-01-21

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll mx = LONG_LONG_MIN;

        ll sum = 0;

        int ans = 0;
        for(int i = 0; i < n; i++){
            mx = max(mx,a[i]);
            sum += a[i];
            if(sum - mx == mx){
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}