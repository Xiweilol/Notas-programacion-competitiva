// Autor: Mintwi
// Fecha: 2025-11-10

#include <bits/stdc++.h>
#define ll long long
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
        bool pas = true;
        ll minimo = 1e9;
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i-1]){
                pas = false;
            } else {
                ll temp = arr[i] - arr[i-1];
                minimo = min(minimo,temp);
            }
        }

        if(pas){
            cout << (minimo / 2) + 1 << "\n";
        } else {
            cout << 0 << "\n";
        }
        
    }

    return 0;
}