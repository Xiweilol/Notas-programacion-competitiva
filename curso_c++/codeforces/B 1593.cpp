// Autor: Mintwi
// Fecha: 2026-01-15

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string n; cin >> n;

        vector <string> t = {"00","25","50","75"};
        int len = n.size();
        int ans = len;
        //Iteramos sobre las posibiles terminaciones del 25 para que sea divisible
        for(auto c : t){
            int temp = 0;

            int i = len - 1;

            //empieza a la derecha, por eso buscamos primero c[1]
            while(i >= 0 && n[i] != c[1]){
                i--;
                temp++;
            }

            if( i < 0) continue;

            i--;
            while(i >= 0 && n[i] != c[0]){
                i--;
                temp++;
            }

            if(i < 0) continue;

            ans = min(ans,temp);
        }
        

        cout << ans << "\n";
    }

    return 0;
}