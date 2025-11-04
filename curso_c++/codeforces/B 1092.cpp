// Autor: Mintwi
// Fecha: 2025-11-03

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

    int ans = 0;
    for(int i = 1; i < n; i+=2){
        ans += arr[i] - arr[i-1];
    }

    cout << ans << "\n";

    return 0;
}