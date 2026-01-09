// Autor: Mintwi
// Fecha: 2026-01-09

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n,k,x;
        cin >> n >> k >> x;

        ll sum_mn = (k * (k+1)) / 2;

        ll sum_mx = ((n * (n+1)) / 2) - (((n-k) * ((n-k) + 1)) / 2);
        //si esta dentro del rango maximo y minimo, es viable
        if(x >= sum_mn && x <= sum_mx){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}