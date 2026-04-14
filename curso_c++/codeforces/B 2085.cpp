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
        int r = n;
        int len = 0;

        int largo = n;

        while(l >= 1 && r >= 1){
 
            //si topa un cero, vamos avanzar la r, hasta tocar uno diferente con la r tenemos que filtrar el caso de que es el unltimo 0 de la cadena y que es
            if(a[l] == 0){
                while(r >= 1 && a[r] == 0 ){
                    len++;
                    r--;
                }
                //si la longitud del 0 es 1, podemos agarrar uno que esta enfrente o que este atras
                if(len == 1){
                    //si no es el primer elemento, siempre agarramos de frente
                    if(r >= 1){
                        largo--;
                        ans.push_back({r,l});
                        l = r;
                        len = 0;
                    } else if(r == 0) {
                        largo--;
                        ans.push_back({r+1,l+1});
                        l = r;
                        len = 0;
                    }
                    continue;
                }
                if(len == n){
                    largo = -1;
                    break;
                }
                largo -= len -1;
                ans.push_back({r+1,l});
                l = r;
                len = 0;
            } else{
                l--;
                r--;
            }
        }
        //cout << largo << "\n";
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
