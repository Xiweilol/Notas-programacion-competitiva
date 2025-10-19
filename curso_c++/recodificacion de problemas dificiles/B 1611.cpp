// Autor: Mintwi
// Fecha: 2025-10-19

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long a,b; cin >> a >> b;

        //definimos el rango de busqueda
        //no se puede formar mas que los programadores, o mas de los matematicos, ni tampoco la suma de ellso entre 4

        long long low = 0, high = min({a,b,(a+b)/4});

        long long ans = 0;
        //last true, porque busca el maximo numero de equipos
        //necesitamos encontrar una condicion para poner los falsos y verdaderos
        while(low <= high){
            long long mid = low +(high - low) / 2;

            //necesitamos minimo 1 programador y 1 matematicos
            //entonces los euqipos que forma mas de 
            //la cantidad de programador o matematicos
            //considera como falso, y la ultima condicion verifica si la cantidad de personas necesitadas
            //no se excede a suma total de personas, si no tamnbien es falso
            if(mid <= a && mid <= b && 4*mid <= (a+b)){
                ans = mid;
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}