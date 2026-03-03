// Autor: Mintwi
// Fecha: 2026-03-03
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
        int L1,B1,L2,B2,L3,B3;

        cin >> L1 >> B1 >> L2 >> B2 >> L3 >> B3;

        if(L1 < B1){
            swap(L1,B1);
            swap(L2,B2);
            swap(L3,B3);
        }

        bool ok = false;
        if(L1 == L2 && L1 == L3){
            //cout << "AQUI chill \n";
            if(B1 + B2 + B3 == L1){
                //cout << "TODO bien \n";
                ok = true;
            }
        } else if(L2 + L3 == L1){
            if(B1+B2 == L1 && B2 == B3){
                ok = true;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}