// Autor: Mintwi
// Fecha: 2025-11-04

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <long long> arr(n+1);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());

        int pos = (n + 1) / 2;
        int ans = 1;

        for(int i = pos + 1; i <= n; i++){
            if(arr[pos] + 1 > arr[i]){
                ans++;
            } else {
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}