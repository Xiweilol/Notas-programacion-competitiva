// Autor: Mintwi
// Fecha: 2025-12-30

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;

        if(n & (n-1)){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}