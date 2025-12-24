// Autor: Mintwi
// Fecha: 2025-12-24

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

        string r = s;
        reverse(r.begin(),r.end());

        set <char> S(s.begin(),s.end());

        if(S.size() == 1 || n == 1){
            cout << "NO\n";
            continue;
        }

        if(k == 0){
            cout << (s < r ? "YES\n" : "NO\n");
        } else{
            cout << "YES\n";
        }

        
    }

    return 0;
}