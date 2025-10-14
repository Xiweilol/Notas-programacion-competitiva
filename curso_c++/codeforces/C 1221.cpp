#include <bits/stdc++.h>

using namespace std;

int main(){
    int q; cin >> q;

    while(q--){
        int c,m,x; cin >> c >> m >> x;

        //necesitamos rangos validos para busqueda binaria
        //en este caso c y m son los minimos requisitos para formar equipos
        //no podemos mas equipos que min(c,m) por eso el r = min
        int l = 0, r = min(c,m);
        int ans = 0;
        while(l <= r){
            //establecemos un valor de la mitad para buscar posibles equipos validos
            int mid = (l + r) / 2;
            //hacemos comparacion de equipos validos
            //debido a que es last true, ya que queremos buscar un maximo equipo que podemos formar
            if(c + m + x - 2 * mid >= mid){
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << ans << "\n";
    }
}