// Autor: Mintwi
// Fecha: 2025-11-21

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;

        ll x,y;
        cin >> x >> y;
        if((!(a&1) && a == b+1) || (a >= b + 2) ){
            cout << -1 << "\n";
            continue;
        }

        int need = b - a;
        int par = need / 2, impar = par;

        if(need & 1){
            impar++;    
        }

        cout << par * x + impar * y << "\n";
    }

    return 0;
}