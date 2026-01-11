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
        ll k; cin >> k;

        vector <ll> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());


        // for(auto n : arr){
        //     cout << n << " ";
        // }

        //cout << "\n";
        ll ans = 1, cnt = 1;
        for(int i = 1; i < n; i++){
            if(abs(arr[i] - arr[i-1]) > k){
                cnt = 1;
                
            } else {
                cnt++;
            }

            ans = max(ans,cnt);
        }


        cout << n - ans << "\n";

    }
    

    return 0;
}