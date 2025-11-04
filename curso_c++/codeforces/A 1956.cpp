// Autor: Mintwi
// Fecha: 2025-11-02

#include <bits/stdc++.h>
#define nl "\n"
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int k,q; cin >> k >> q;

        int minimo = 101;

        for(int i = 0; i < k; i++){
            int a; cin >> a;

            minimo = min(minimo,a);
        }

        for(int i = 0; i < q; i++){
            int n; cin >> n;

            cout << ((n >= minimo) ? minimo - 1  : n )<< " ";
        }

        cout << nl;
    }

    return 0;
}