// Autor: Mintwi
// Fecha: 2025-10-20

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        unordered_map <char,int> mapa;
        for(int i = 0; i < n; i++){
            mapa[s[i]]++;
        }

        int cont = 1;
        int ans = 0;
        for(char& c : abc){
            if(mapa.count(c) && mapa[c] >= cont){
                ans++;
            }
            cont++;
        }

        cout << ans << "\n";

    }

    return 0;
}