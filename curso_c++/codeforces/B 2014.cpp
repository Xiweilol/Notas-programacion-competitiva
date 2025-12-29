// Autor: Mintwi
// Fecha: 2025-12-29

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

ll impares(ll n){
    return (n+1) / 2;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n,k; cin >> n >> k;

        ll cntOdd = 0;
        
        cntOdd = impares(n);

        if(n >= k){
            cntOdd -= impares(n-k);
        }

        cout << ((cntOdd & 1) ? "NO\n" : "YES\n");
    }

    return 0;
}