// Autor: Mintwi
// Fecha: 2025-11-20

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll ans = 0;
    sort(arr.begin(),arr.end());
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i-1] + 1){
            ans += arr[i] - arr[i-1] - 1 ;
        }
    }

    cout << ans << "\n";

    return 0;
}