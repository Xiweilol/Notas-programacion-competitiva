// Autor: Mintwi
// Fecha: 2026-05-22
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
        int n; cin >> n;

        vector <ll> a(n+1);

        int temp = -1;
        bool lol = false;
        bool ok = true;
        for(int i = 1; i <= n; i++){
            cin >> a[i];

            if(temp != -1 && a[i] < a[i-1]){
                if(temp > a[i]){
                    lol = true;
                }
            } else if(a[i] < a[i-1] && temp == -1){
                temp = a[i];
                ok = false;
            }
        }

        if(ok){
            cout << "YES\n";
            continue;
        }
        if(n == 1){
            cout << "YES\n";
            continue;
        }

        if(lol){
            cout << "NO\n";
        } else{
            int minimo = -1;
            int maximo = -1;
            //tenemso que ir checando
            bool ya = true;
            for(int i = 1;i <= n; i++){
                if(a[i] < a[i-1]){
                    int idxtemp = i;
                    while(idxtemp < n && a[idxtemp] < a[i-1]){
                        idxtemp++;
                    }
                    
                    //sacamos el minimo aceptado y maximo aceptado

                    int minimot = a[i-1] - a[i];
                    
                    int maximot = a[idxtemp] - a[idxtemp-1];
                    
                    if(a[idxtemp] < a[i-1]){
                        maximot = minimot;
                    }
                    //si los minimos y maximos son diferentes son lo que tenemos
                    if(minimo != -1 && maximo != -1){
                        if(maximot < minimo || maximo < minimot){
                            ya = false;
                            break;
                        }
                        if(maximot < minimot){
                            ya = false;
                            break;
                        }

                    }

                    if(maximot < minimot && idxtemp != n){
                        ya = false;
                        break;
                    }
                    minimo = minimot;
                    maximo = maximot;
                }
            }

            cout << (ya ? "YES" : "NO") << "\n";
        }


    }

    return 0;
}