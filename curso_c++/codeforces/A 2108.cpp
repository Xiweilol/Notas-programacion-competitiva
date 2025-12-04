// Autor: Mintwi
// Fecha: 2025-12-04

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int ans = (pow(n,2) / 4) + 1;
        
        cout << ans << "\n";
    }

    return 0;
}