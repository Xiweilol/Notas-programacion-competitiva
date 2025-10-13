#include <bits/stdc++.h>

using namespace std;

//verificar si esta dentro del rango


int main(){
    int p,q,l,r; 
    cin >> p >> q >> l >> r;

    vector <pair<int,int>> Z(p);
    vector <pair<int,int>> X(q);

    for(int i = 0; i < p; i++){
        cin >> Z[i].first >> Z[i].second;
    }

    for(int i = 0; i < q; i++){
        cin >> X[i].first >> X[i].second;
    }

    int ans = 0;
    
    for(int i = l ; i <= r; i++){
        bool valido = false;
        //iteramos el x para sumar sus dos valores a t
        for(auto [c,d] : X){
            int tempc = c + i;
            int tempd = d + i;

            // iterar el z para verificar si llega a considerar algun valor
            for(auto [a,b] : Z){
                //inicio de x no esta mas alla del final del z, el final de x no esta antes del inicio de z
                if(tempc <= b && tempd >= a){
                    valido = true;
                    break;
                }
            }
            //si ya lo encontro, rompe la iteracion del x, ya qu ya existe un t valido
            if(valido) break;
        }
        if(valido) ans++;
    }

    cout << ans << "\n";

    return 0;
}