// Autor: Mintwi
// Fecha: 2025-11-25

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        int real = stoi(s);

        int cuadrado = pow(real,0.5);

        if(cuadrado * cuadrado == real){
            
            cout << cuadrado << " " <<  0 << "\n";
        } else {
            cout << -1 << "\n";
        }
        
    }

    return 0;
}