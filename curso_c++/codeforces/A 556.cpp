// Autor: Mintwi
// Fecha: 2026-02-03

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n; cin >> n;

        string s; cin >> s;

        int cntZeros = 0;
        for(int i = 0; i < n ; i++){
            if(s[i] == '0'){
                cntZeros++;
            }
        }

        int cntOnes = n-cntZeros;

        cout << abs(cntOnes - cntZeros) << "\n";
    

    return 0;
}