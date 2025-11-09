// Autor: Mintwi
// Fecha: 2025-11-09

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        int cnt = 0;
        for( auto& c : s){
            if(c == 'Q'){
                cnt++;
            } else {
                cnt--;
            }

            if(cnt < 0){
                cnt = 0;
            }
        }

        if(cnt == 0 && s[n-1] != 'Q'){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }



    }

    return 0;
}