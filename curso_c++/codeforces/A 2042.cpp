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

        vector <int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.rbegin(),arr.rend());

        long long ans = 0;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];

            if(sum <= k){
                ans = sum;
            } else {
                break;
            }
        }

        cout << k - ans << "\n";

    }

    return 0;
}