// Autor: Mintwi
// Fecha: 2025-10-26

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string ans = "";
    for(int i = 0; i < 54; i++){
        ans += "Yes";
    }
    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        if(ans.find(s) != string::npos){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }  
    }

    return 0;
}
