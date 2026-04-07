// Autor: Mintwi
// Fecha: 2026-04-06
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int unos = 0;
        int ceros = 0;

        for(int i = 0; i < 2 * n; i++){
            int ai; cin >> ai;

            (ai & 1 ? unos++ : ceros++);
        }

        int temp = ceros;
        int temps = unos;
        int mx = 0;
        //mientra queda uno y ceros
        while(temp-- && temps--){
            mx++;
        }

        //ahora para el minimo necesitamos checar la aridades de numero
        int mn = 0;

        if((unos & 1) || (ceros & 1)){
            mn = 1;
        }

        cout << mn << " " << mx << "\n";

    }

    return 0;
}