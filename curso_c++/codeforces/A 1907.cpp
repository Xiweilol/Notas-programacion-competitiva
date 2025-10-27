// Autor: Mintwi
// Fecha: 2025-10-26

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int pos = s[1] -'0';
        char letra = s[0];

        string cadena = " abcdefgh";
        for(int i = 1; i <= 8; i++){
            if(pos == i){
                continue;
            } else if(letra == cadena[i]){
                cout << letra << i << "\n";
                if(i == 8){
                    break;
                }
                cout << cadena[i+1] << pos << "\n";
                continue;
            }
            cout << letra << i << "\n";
            cout << cadena[i] << pos << "\n";
        }

    }

    return 0;
}