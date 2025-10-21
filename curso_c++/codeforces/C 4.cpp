// Autor: Mintwi
// Fecha: 2025-10-21

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    unordered_map <string,int> mapa;

    while(t--){
        string s; cin >> s;

        if(!mapa.count(s)){
            mapa[s]++;
            cout << "OK\n";
        } else {
            cout << mapa.find(s)->first << mapa.find(s)->second << "\n";
            mapa[s]++;
        }
    }

    return 0;
}