// Autor: Mintwi
// Fecha: 2026-02-10

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll total = 0;

    vector <int> freq(101,0);
    
    for(int j = n-1; j >= 0; j--){
        //vamos a ir sumando todos los numeros que sea menores que el que estamnos viendo
        for(int i = 1; i < a[j]; i++){
            total += freq[i];
        }
        //lo visitamos, por lo tanto lo sumamos
        freq[a[j]]++;
    }

    cout << total << "\n";

    return 0;
}