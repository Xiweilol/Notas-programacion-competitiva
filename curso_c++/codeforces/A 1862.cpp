// Autor: Mintwi
// Fecha: 2026-03-15
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
        int n,m; cin >> n >> m;

        vector <string> cont(n);

        for(int i = 0; i < n; i++) cin >> cont[i]; 
        string r = "vika";
        int cnt = 0;
        //i es para las columnas
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                
                if(cont[j][i ] == r[cnt]){
                    //cout << r[cnt] << "\n";
                    //cout << cont[j][i] << "\n";
                    cnt++;
                    break;
                }

                // if(j == n-1){
                //     cout << cont[j][i];
                // } else {
                //     cout << cont[j][i] << "\n";
                // }
            }

            if(cnt == 4){
                break;
            }
        }

        cout << (cnt == 4 ? "YES" : "NO") << "\n";

    }

    return 0;
}