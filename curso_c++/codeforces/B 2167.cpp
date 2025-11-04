// Autor: Mintwi
// Fecha: 2025-10-29

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s,t;cin >> s >> t;

        map <char,int> freq;

        for(char& c : t){
            freq[c]++;
        }

        for(char& c : s){
            if(freq.count(c) && freq[c] > 0){
                n--;
                freq[c]--;
            }
        }

        if(n == 0){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}