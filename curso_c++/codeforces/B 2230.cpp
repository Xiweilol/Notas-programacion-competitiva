// Autor: Mintwi
// Fecha: 2026-05-19
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
        string s; cin >> s;
      

        int acu = 0;
        int acu2 = 0;
        int cnt = 0;
        //solo para los 2's
        for(int i = s.size()-1; i >= 0; i--){

            if(s[i] == '2'){
                acu2++;
            }

            if(s[i] == '4'){
                cnt++;
            }
        }
        int ans = INT_MAX;
        
        int temp = acu2;
        //para los 1 y 3;
        
        for(int i = 0; i < s.size();i++){
            
            if(s[i] == '2'){
                acu2--;
                continue;
            }
            if(s[i] == '1' || s[i] == '3'){
                acu++;
                //vamos a intentar dejar este 1
                ans = min(ans,(acu-1) + acu2);
            }

        }

        //si no dejo ningun 1 o 3

        ans = min({ans,acu,temp});

        cout << ans + cnt << "\n";
        


    }

    return 0;
}