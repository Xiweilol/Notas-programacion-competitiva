// Autor: Mintwi
// Fecha: 2025-11-06

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,t; cin >> n >> t;

    vector <ll> arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll sum = 0;

    int l = 0, ans = 0;
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > t){
            sum -= arr[l];
            l++;
        }

        ans = max(ans,i-l+1);
    }
    cout << ans << "\n";
    return 0;
}