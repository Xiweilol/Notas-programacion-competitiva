// Autor: Mintwi
// Fecha: 2026-03-06
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
const ll mods = 998244353;
ll exponenciacionBinaria(ll a,ll b){
    ll res = 1;

    a %= mods;
    //mientras que su exponente sea mauyor que 0, lo vamos a convertir base 2
    while(b > 0){
        //si es un uno, tenemos que multiplicar por esa posicion
        if(b & 1){
            res = (res * a) % mods;
        }

        a  = (a * a) % mods;
        b >>= 1; // division entre dos
    }

    return res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> p(n);
        vector <int> q(n);
        for(int i = 0; i < n; i++) cin >> p[i];
        for(int i = 0; i < n; i++) cin >> q[i];

        //registrar el indice con maximo elemento que hemos encontrado
        int i = 0, j = 0;

        for(int k = 0; k < n; k++){
            //sacamos para la permutacion de p
            if(p[k] > p[i]) i = k;
            //sacamos para la permutacion de q
            if(q[k] > q[j]) j = k;
            int Buena = 0;
            int chill = 0;
            //comparar lso indices de la p y sacar su opuesta
            if(p[i] == q[j]){
                //k -i es para opuesta del p, k - j es la opuesta del q
                if(q[k - i] > p[k - j]){
                    //si la opuesta del p es mas grande, vamos a asignarlo
                    chill = p[i];
                    Buena = q[k - i];
                } else {
                    chill = q[j];
                    Buena = p[k - j];
                }
            } else {
                if(p[i] > q[j]){
                    chill = p[i];
                    Buena = q[k - i];
                } else {
                    chill = q[j];
                    Buena = p[k - j];
                }
            }

            cout << (exponenciacionBinaria(2,chill) + exponenciacionBinaria(2,Buena)) % mods<< " ";

        }
        cout << "\n";

    }

    return 0;
}