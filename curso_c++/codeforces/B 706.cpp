// Autor: Mintwi
// Fecha: 2025-11-01

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    int q; cin >> q;

    while(q--){
        int m; cin >> m;

        int l = 0, r = n - 1;
        int ans = 0;
        while(l <= r){
            int mid = l + (r-l) / 2;

            if(m >= arr[mid]){
                ans = mid + 1;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}