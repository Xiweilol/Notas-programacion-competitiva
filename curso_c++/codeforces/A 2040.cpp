// Autor: Mintwi
// Fecha: 2025-11-29

#include <bits/stdc++.h>
#define ll long long
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

        int ans = -1;
        
        int r = arr[0] % k;

        for(int i = 1; i< n; i++){
            if(arr[i] % k != r){
                ans = i + 1;
                break;
            }
        }

        if(ans == -1){
            cout << "NO\n";
        } else {
            cout << "YES\n" << ans << "\n";
        }

    }

    return 0;
}