// Autor: Mintwi
// Fecha: 2025-12-27

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        map <char,int> freq;

        for(int i = 0; i < s.size(); i++){
            freq[s[i]]++;
        }

        if(freq['Y'] >= 2){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }
    }

    return 0;
}