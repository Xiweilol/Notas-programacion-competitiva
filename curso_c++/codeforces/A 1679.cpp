// Autor: Mintwi
// Fecha: 2026-01-13

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*Al parecer solo es divisiones
dividir entre 4 para el maximo de numer
enre 6 para el minimo*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int64_t n; cin >> n;

        if(n & 1 || n == 2){
            cout << -1 << "\n";
        } else {
            cout << (n + 5)/ 6 << " "  << n / 4 << "\n";
         }

    }

    return 0;
}