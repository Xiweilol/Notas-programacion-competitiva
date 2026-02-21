// Autor: Mintwi
// Fecha: 2026-02-21
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        string s; cin >> s;

        int cnt = 1;

        bool ok = false;

        char temp = s[0];

        set <char> S(s.begin(),s.end());
        for(int i = 1; i < n; i++){
            if(s[i] != temp){
                cnt++;
                temp = s[i];
            } else {
                ok = true;
            }
            
        }

        
        if(s[0] == s [n-1]){
            cout << cnt << "\n";
        } else if(ok) {
            cout << cnt+1 << "\n";
        } else {
            cout << cnt << "\n";
        }
    }

    return 0;
}