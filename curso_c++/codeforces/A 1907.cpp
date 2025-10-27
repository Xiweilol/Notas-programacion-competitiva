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
            }

            cout << letra << i << " ";
        }

        for(int i = 1; i <= 8; i++){
            if(cadena[i] == letra){
                continue;
            }

            cout << cadena[i] << pos << " ";
        }
        cout << "\n";
    }

    return 0;
}