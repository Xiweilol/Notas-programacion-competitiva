// Autor: Mintwi
// Fecha: 2025-11-25

#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string abc = " abcdefghijklmnopqrstuvwxyz";

    map <char,int> val;
    for(int i = 1; i <= 26; i++){
        val[abc[i]] = i;
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        sort(s.begin(),s.end());

        cout << val[s[n-1]] << "\n";

    }

    return 0;
}