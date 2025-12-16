// Autor: Mintwi
// Fecha: 2025-12-14

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int k; cin >> k;

        int obj = k - 2;

        set <int> S;
        for(int i = 0; i < k; i++){
            int a; cin >> a;
            S.insert(a);
        }

        if(obj == 1){
            cout << 1 << " " << 1 <<"\n";
            continue;
        }
        int need = obj / 2;

        bool pas = false;
        int x = 0,y = 0;

        for(int i = 1; i <= need; i++){
            //el divisor adentro ya que necesitamos verificar si son divisores, y tamnbien tiene que multiplicar, da el obj
            if(obj % i == 0){
                int j = obj / i;

                if(S.count(i) && S.count(j)){
                    pas = true;
                    x = i;
                    y = j;
                    break;
                }
            }
        }

        if(pas){
            cout << x << " " << y << "\n";
        } else{
            cout << 1 << " " << obj << "\n";
        }


        
    }

    return 0;
}