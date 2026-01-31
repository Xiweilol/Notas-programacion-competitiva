// Autor: Mintwi
// Fecha: 2026-01-30

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        ll f,a,b; cin >> f >> a >> b;

        vector <ll> m(n+1);

        for(int i = 1; i <= n; i++){
            cin >> m[i];
        }

        for(int i = 1; i <= n; i++){
            //manten apagado con costo de b
            //o manten prendido con costo de a hasta el siguiente mensaje
            //es mas barato
            f -= min(a * (m[i] - m[i-1]),b);
        }

        cout << (f > 0 ? "YES\n" : "NO\n"); 
    }

    return 0;
}