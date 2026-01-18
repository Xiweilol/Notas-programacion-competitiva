// Autor: Mintwi
// Fecha: 2026-01-18

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        string s; cin >> s;

        map <char,int> freq;
        for(auto  c : s){
            freq[c]++;
        }        
        string a = "ABCDEFG";

        int ans = 0;

        for(auto c : a){
            if(freq[c] < m){
                ans += (m - freq[c]);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}