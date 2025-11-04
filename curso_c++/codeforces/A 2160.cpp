// Autor: Mintwi
// Fecha: 2025-11-04

#include <bits/stdc++.h>
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

        set<int> freq(arr.begin(),arr.end());

        int ans = 0;

        while(freq.count(ans)){
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}