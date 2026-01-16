// Autor: Mintwi
// Fecha: 2026-01-16

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int64_t cnt1 = 0, cnt0 = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                cnt1++;
            } else if(arr[i] == 0){
                cnt0++;
            }
        }

        cout << cnt1 * (1ll << cnt0) << "\n";
    }

    return 0;
}