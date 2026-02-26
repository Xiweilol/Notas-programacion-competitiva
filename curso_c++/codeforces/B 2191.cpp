// Autor: Mintwi
// Fecha: 2026-02-25
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int  cntZero = 0;
        int  cntOnes = 0;
        for(int i = 0; i < n; i++){
            int ai; cin >> ai;

            if(ai == 0){
                cntZero++;
            } else if(ai == 1){
                cntOnes++;
            }
        }

        if(cntZero == 0){
            cout << "NO\n";
        } else if(cntZero == 1 || (cntZero >= 2 && cntOnes >= 1)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}