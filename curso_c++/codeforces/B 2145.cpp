#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;


        int cntA = count(s.begin(),s.end(),'0');
        int cntB = count(s.begin(),s.end(),'1');
        int cntC = count(s.begin(),s.end(),'2');

        string ans(n,'+');

        for(int i = 0; i < n; i++){
            //empieza desde 0, para los a, nunca lo llega a tocar ocmo tal
            // para los que no estamos seguros
            if((i < cntA + cntC) || (i >= n - cntB - cntC )){
                ans[i] = '?';
            } 
            //sobreescriba a todos incognica en caso de que pertenece a los eliminados
            if((i < cntA) || (i >= n - cntB) || (k == n)){
                ans[i] = '-';
            }
        }

        cout << ans << "\n";
    }

    return 0;
}