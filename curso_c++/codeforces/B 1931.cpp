// Autor: Mintwi
// Fecha: 2026-01-23

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> a(n);

        ll sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        // cada una de las posiciones, debe de tener k
        ll k = sum / n;

        bool ok = true;
        for(int i = 0; i < n - 1; i++){
            if(a[i] < k){
                //dado a que solo recibe el agua de izquierda a derecha, si una posicion
                //no tiene agua suficiente, no podemos agarrar mas aguas
                ok = false;
                break;
            }
            ll ext = a[i] - k; // lo que sobro del contenedor
            a[i] = k; // al actual le asignamos a k
            a[i+1] += ext; // rellenar el siguiente con lo que sobro
        }

        if(ok){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }


    }

    return 0;
}