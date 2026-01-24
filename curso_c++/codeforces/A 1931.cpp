// Autor: Mintwi
// Fecha: 2026-01-23

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int len = 26;
        string mn = "zzz", curr = "";
        //busqueda de 3 for, empezando desde la primera posicion
        for(int i = 0; i < len; i++ ){
            for(int j = 0; j < len; j++){
                for(int l = 0; l < len; l++){

                    if(i + j + l + 3 == n){
                        curr += char(i +'a');
                        curr += char(j +'a');
                        curr += char(l +'a');

                        mn = min(mn,curr);
                    }
                }
            }
        }

        cout << mn << "\n";
    }

    return 0;
}