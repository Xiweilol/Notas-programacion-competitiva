// Autor: Mintwi
// Fecha: 2025-10-22

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    string cadena = "";

    for (int i = 0; i < n; i++){
        string s; cin >> s;
        cadena += s;
    }

    int largo = n * 2;
    int ans = 1;
    for(int i = 1; i < largo; i++){
        if(cadena[i] == cadena[i-1]){
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}