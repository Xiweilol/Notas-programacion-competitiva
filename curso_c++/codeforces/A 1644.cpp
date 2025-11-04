// Autor: Mintwi
// Fecha: 2025-11-03

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        unordered_map <char,int> Control ={
            {'R',0},
            {'B',0},
            {'G',0}
        };

        string s; cin >> s;

        bool pas = true;
        for(auto&c : s){
            if(islower(c)){
                int temp = toupper(c);
                Control[temp]++;
            } else {
                c = toupper(c);
                if(Control[c] == 0){
                    pas = false;
                    break;
                }    
            }
        }

        if(pas){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}