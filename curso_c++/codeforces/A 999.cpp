// Autor: Mintwi
// Fecha: 2025-11-06

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int  l = 0, r = n - 1;
    bool izq = true,der = true;
    int ans = 0;
    while(l <= r){
        if(!izq && !der){
            break;
        }
        if(arr[l] <= k){
            ans++;
            l++;
        } else {
            izq = false;
        }

        if(l > r){
            break;
        }
        if(arr[r] <= k){
            ans++;
            r--;
        } else {
            der = false;
        }

    }

    cout << ans << "\n";
    return 0;
}