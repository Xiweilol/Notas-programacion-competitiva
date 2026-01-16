// Autor: Mintwi
// Fecha: 2026-01-15

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        if(s[0] != s[s.size()-1]){
            s[0] = s[s.size()-1];
        }

        cout << s << "\n";
    }

    return 0;
}