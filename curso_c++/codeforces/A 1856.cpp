// Autor: Mintwi
// Fecha: 2025-11-12

#include <bits/stdc++.h>
#define ll long long
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

        int ans = 0;

        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                ans = max(ans,arr[i]);
            }
        }

        cout << ans << "\n";

    }

    return 0;
}