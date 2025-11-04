// Autor: Mintwi
// Fecha: 2025-11-02

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;

        if(a == b){
            cout << 0 << "\n";
            continue;
        }

        bool paridad = (a & 1) == (b & 1);

        if((b > a && paridad) || (b < a && !paridad)){
            cout << 2 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }

    return 0;
}