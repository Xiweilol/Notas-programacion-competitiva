// Autor: Mintwi
// Fecha: 2026-01-12

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int mx = *max_element(arr.begin(),arr.end());
        int mn = *min_element(arr.begin(),arr.end());

        if(arr[0] == mn || arr[n-1] == mx){
            cout << mx - mn << "\n";
        } else{
            int ans = max(arr[n-1] - arr[0], mx - arr[0]);
            ans = max(ans,arr[n-1] - mn);
            for(int i = 1; i < n; i++){
                ans = max(ans,arr[i-1] - arr[i]);
            }
            
            cout << ans << "\n";
        }
    }

    return 0;
}