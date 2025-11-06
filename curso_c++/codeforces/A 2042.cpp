// Autor: Mintwi
// Fecha: 2025-11-05

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        vector <int> arr(n+1,0);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        sort(arr.rbegin(),arr.rend());

        vector <long long> prefix(n+1);

        for(int i = 1; i <= n; i++){
            prefix[i] = prefix[i-1] + arr[i];
        }

        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(prefix[i] > k){
                ans = k - prefix[i-1];

                break;
            }
        }

        cout << ans << "\n";

    }

    return 0;
}