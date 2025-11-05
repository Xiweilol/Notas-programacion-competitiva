// Autor: Mintwi
// Fecha: 2025-11-04

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <ll> arr(n+1);

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    vector <ll> pref1(n+1);
    
    for(int i = 1; i <= n; i++){
        pref1[i] = pref1[i-1] + arr[i];
    }

    sort(arr.begin(),arr.end());

    vector <ll> pref2(n+1);

    for(int i = 1; i <= n; i++){
        pref2[i] = pref2[i-1] + arr[i];
    }

    int m; cin >> m;

    while(m--){
        int a,l,r; cin >> a >> l >> r;
        if(a == 1){
            cout << pref1[r] - pref1[l-1] << "\n";
        } else {
            cout << pref2[r] - pref2[l-1] << "\n";
        }
    }
    return 0;
}