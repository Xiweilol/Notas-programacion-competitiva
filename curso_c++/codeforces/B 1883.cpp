// Autor: Mintwi
// Fecha: 2026-01-08

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        string s; cin >> s;

        map <char,int> freq;

        for(int i = 0; i < n; i++){
            freq[s[i]]++;
        }

        int odd = 0;
        for(auto [c,v] : freq){
            if(v & 1){
                odd++;
            }
        }

        if(odd > k + 1){
            cout << "No\n";
        } else{
            cout << "YES\n";
        }
    }

    return 0;
}