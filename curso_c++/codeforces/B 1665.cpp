// Autor: Mintwi
// Fecha: 2026-01-14

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        map <int,int> freq;

        for(int i = 0; i < n; i++){
            int a; cin >> a;

            freq[a]++;
        }

        int mx = 0;

        //sacar la frecuancia de aparicion
        for(auto [k,v] : freq){
            mx = max(mx,v);
        }
        int ans = 0;
        //mientra que el numero mas repetido es menor que n
        while(mx < n){
            //es el numero maximo que puedes obtener en una ronda de clonacion
            // n - mx son los que falta para completar, maximo es mx
            int x = min(n-mx,mx);
            //resultado mas 1 mas el cantidad de necesitados clonado
            //siendo que 1 al arreglo que clonamos, x el numero del swap
            ans += 1 + x;
            //aumentar en x el numero repetido
            mx += x;
        }

        cout << ans << "\n";
    }

    return 0;
}