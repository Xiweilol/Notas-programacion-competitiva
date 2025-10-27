// Autor: Mintwi
// Fecha: 2025-10-26

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        unordered_map <char,int> freq;
        for(char& c : s){
            freq[c]++;
        }

        cout << min(n,freq['A']) + min(n,freq['B']) + min(n,freq['C']) + min(n,freq['D']) << "\n"; 
    }

    return 0;
}