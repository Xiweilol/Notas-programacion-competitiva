// Autor: Mintwi
// Fecha: 2026-02-15
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /*Cada bacteria  que agregamos es una potencia de dos
    la respuesta es contar los unos de su representacion binaria*/

    int x; cin >> x;
    int count = 0;

    while(x > 0){
        //revisa la ultima posicion del bit
        count += x & 1;
        //dividiendo entre 2, podemos decir que qutio un uno al final si es 1;
        x >>= 1;
    }

    cout << count << "\n";
    return 0;
}