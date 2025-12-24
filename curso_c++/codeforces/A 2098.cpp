// Autor: Mintwi
// Fecha: 2025-12-24

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        string s; cin >> s;

        map <int,int> freq;
        for(char& c : s){
            freq[c -'0']++;
        }

        string ans = "";
        for(int i = 0; i < 10; i++){
            //necesario para cada  posicion
            int req =  9-i;
            for(auto&[n,v] : freq){
                // si existe este numnero que viene desde menor a maor
                //existe y que n sea mas grande que lo necesario o igual, lo ponemos
                if(v > 0 && n >= req){
                    ans += to_string(n);
                    v--;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;        
}
