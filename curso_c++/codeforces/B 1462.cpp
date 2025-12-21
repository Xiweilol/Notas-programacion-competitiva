// Autor: Mintwi
// Fecha: 2025-12-20

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        bool pas = false;

        string tar = "2020";

        for(int i = 0; i <= 4; i++){
            string pref = s.substr(0,i);
            string suf = s.substr(n-(4-i), 4-i);
            if(pref + suf == tar){
                pas = true;
                break;
            }
        }

        cout << (pas ? "YES\n" : "NO\n");


    }

    return 0;
}