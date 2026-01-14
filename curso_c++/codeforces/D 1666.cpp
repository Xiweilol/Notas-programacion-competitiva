// Autor: Mintwi
// Fecha: 2026-01-13

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while(n--){
        string s,t; cin >> s >> t;

        //checar la frecuencia minima para conservar la cadena t de s

        map <char,int> freq;

        for(char c : t){
            freq[c]++;
        }

        string ans = "";

        for(int i = s.length()-1; i >= 0; i--){
            if(freq[s[i]] > 0){
                ans += s[i];
                freq[s[i]]--;
            }
        }

        reverse(ans.begin(),ans.end());

        cout << (ans == t ? "YES\n" : "NO\n");
    }

    return 0;
}