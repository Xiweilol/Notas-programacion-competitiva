// Autor: Mintwi
// Fecha: 2025-11-15

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string a,b; cin >> a >> b;

        int cntZigZag1 = 0, cntZigZag2 = 0;
        for(int i = 0; i < n; i++){
            
            if(i & 1){
                //indice impar, zigzag 2 tiene a la a y zigzag 1 tiene a la b
                cntZigZag2 += (a[i] == '0');
                cntZigZag1 += (b[i] == '0');
            } else {
                //indice par, alreves
                cntZigZag2 += (b[i] == '0');
                cntZigZag1 += (a[i] == '0'); 
            }
        }

        if(cntZigZag1 >= (n+1) / 2 && cntZigZag2 >= n / 2){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}