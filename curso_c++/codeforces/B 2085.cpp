#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        vector<pair<int,int>> ans;

        int l = n;
        int r = n -1;
        int len = 0;

        int largo = n;

        while(l >= 1 && r >= 1){
            //por si es el ultimo 0 y que no es secuencia
            if(l == 1 && r == 1 && a[l] == 0){
                ans.push_back({1,2});
                largo--;
                break;
            }

            if(l == n && a[r] != 0 && a[l] == 0){
                ans.push_back({n-1,n});
                largo--;
                l--;
                r--;
                continue;
            }
            //si topa un cero, vamos avanzar la r, hasta tocar uno diferente con la r tenemos que filtrar el caso de que es el unltimo 0 de la cadena y que es
            if(a[l] == 0){
                while(r >= 1 && a[r] == 0 ){
                    len++;
                    r--;
                }
                //una vez que la cadena ya no es de 0, rompemo
                largo -= len -1;
                ans.push_back({r+1,l});
                l = r;
                len = 0;
            } else{
                l--;
                r--;
            }
        }
        //cuando todos son iguales basta con checar estos, sea par o impar
        if(largo == -1){
            cout << 3 << "\n";
            cout << 1 << " " << n -2 << "\n";
            cout << 2 << " " << 3 << "\n";
            cout << 1 << " " << 2 << "\n";
            
            continue;
        }
        //
        if(largo != 1){
            cout << ans.size()+1 << "\n";

            for(auto [k,v] : ans){
                cout << k << " " << v << "\n";
            }
            
            cout << 1 << " " << largo << "\n";
        } else{
            cout << ans.size() << "\n";

            for(auto [k,v] : ans){
                cout << k << " " << v << "\n";
            }

        }
    }


    return 0;
}
