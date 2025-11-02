// Autor: Mintwi
// Fecha: 2025-11-02

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string abc = " abcdefghijklmnopqrstuvwxyz";
    map <char,int> Mapa;
    for(int i = 1; i <= 26; i++){
        Mapa[abc[i]] = i;
    }

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        sort(s.begin(),s.end());

        cout << Mapa[s[n-1]] << "\n";
    }

    return 0;
}