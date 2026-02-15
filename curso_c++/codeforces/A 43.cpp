// Autor: Mintwi
// Fecha: 2026-02-15
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    map <string,int> freq;

    for(int i = 0; i < n; i++){
        string s; cin >> s;

        freq[s]++;
    }

    int mx = INT_MIN;
    string ans = "";
    for(auto& [k,v] : freq){
        if(v > mx){
            ans = k;
            mx = v;
        }   
    }

    cout << ans << "\n";

    return 0;
}