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

        vector <int> di(n);
        vector <int> si(n);

        for(int i = 0; i < n; i++){
            cin >> di[i] >> si[i];
        }

        int ans = 0;
        for(int k = 1; k <= 300; k++){
            bool ok = true;

            for(int i = 0; i < n; i++){
                int d = di[i];
                int s = si[i];

                //solo si la k que eligimos es mayor que el numero de trampa
                if(k >= d){
                    // se rompe cuando el k que eligimos ya no tiene suficiente tiempo para regresar
                    if(2 *(k - d) >= s){
                        ok = false;
                        break;
                    }
                }
            }

            if(ok) ans = k; 
        }

        cout << ans << "\n";

    }

    return 0;
}