// Autor: Mintwi
// Fecha: 2025-11-06

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n,s; cin >> n >> s;
        ll cuadrado = pow(n,2);
        if(cuadrado > s){
            cout << 0 << "\n";
        } else {
            cout << s / cuadrado  << "\n";
        }
    }

    return 0;
}