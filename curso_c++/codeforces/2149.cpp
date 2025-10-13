#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());

        int ans = 0;
        for(int i = 1; i <= n  ; i += 2){
            int resta = arr[i] - arr[i-1];
            ans = max(ans,resta);
        }

        cout << ans << "\n";
    }

    return 0;
}