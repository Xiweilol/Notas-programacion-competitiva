// Autor: Mintwi
// Fecha: 2026-01-11

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> arr(n+1);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }


        ll ans = 0;

        for(int i = 1; i <= n; i++){
            if(arr[i] != i){
                ans = gcd(ans,abs(arr[i] - i));
            }
            
        }

        cout << ans << "\n";
    }

    return 0;
}