// Autor: Mintwi
// Fecha: 2026-01-08

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll a,b,n; cin >> a >> b >> n;

        //cuando el tamaño de cada ventana minima es menor o igual al longitud de tu pantalla
        // entonces siempre puedes hacer un movimineto
        if(n* b <= a || b == a){
            cout << 1 <<"\n";
        } else{
            cout << 2 << "\n";
        }
    }

    return 0;
}