// Autor: Mintwi
// Fecha: 2026-02-21
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

        string s; cin >> s;

        int cntZeros = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                cntZeros++;
            }
        }

        int cntOnes = n - cntZeros;

        if(cntZeros % 2 == 1){
            cout << cntZeros << "\n";
            for(int i = 0; i < n; i++){
                if(s[i] == '0'){
                    cout << i + 1 << " ";
                }
            }
        } else if(cntOnes % 2 == 0){
            cout << cntOnes << "\n";
            if(cntOnes != 0){
                for(int i = 0; i < n; i++){
                    if(s[i] == '1'){
                        cout << i + 1 << " ";
                    }
                }                
            }

        } else {
            cout << -1;
        }

        cout << "\n";

    }

    return 0;
}