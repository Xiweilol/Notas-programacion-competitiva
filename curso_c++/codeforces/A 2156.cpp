#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> arr(n);

        unordered_map <int,int> cont;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int a : arr){
            cont[a]++;
        }

        vector <int> ocurrencia;
        for(auto& par : cont){
            ocurrencia.push_back(par.second);
        }

        int maximo = *max_element(ocurrencia.begin(),ocurrencia.end());
        int ans = 0;
        for(int i = 1; i <= maximo; i++){
            int valido = 0;
            for(int c : ocurrencia){
                if(c >= i){
                    valido++;
                }
            }
            //dependiendo cuantas valido tenga, y que numero de secuencia estamos formando
            int longitud_actual = i * valido;
            ans = max(ans, longitud_actual);
        }
        cout << ans << "\n";
    }
}