// Autor: Mintwi
// Fecha: 2025-11-08
//VI LA SOLUCION
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> arr(n);
        vector <pair<ll,int>> b(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            b[i] = {arr[i],i};
        }

        sort(b.begin(),b.end());

        vector <ll> prefix(n);

        prefix[0] = b[0].first;

        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + b[i].first;
        }

        //hacer un tipo dp para este problema
        vector <int> mx(n);
        //el ultimo siempre es el mas grande que todos
        //por eso asigna en posicion n-1 igual a n-1
        mx[n-1] = n-1;
        //iteramos iterar desde el penultima posicion
        for(int i = n - 2; i >= 0; i--){
            //si el prefix sum del arreglo original, es mas grande que el elemento siguiente del arreglo original
            if(prefix[i] >= b[i+1].first){
                //le asigna un valor de mas
                mx[i] = mx[i+1];
            } else {
                //si no lo es, el resultado siempre es su misma posciion
                mx[i] = i;
            }
        }

        vector <int> ans(n);
        for(int i = 0; i < n; i++){
            //al final se asigna a los indices originales sus respectivo valor
            ans[b[i].second] = mx[i];
        }

        for(auto& n : ans){
            cout << n << " ";
        }

        cout << "\n";
    }

    return 0;
}