// Autor: Mintwi
// Fecha: 2026-05-06
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        int cntCerra = 0;
        int cntabre = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                cntCerra++;
            } else {
                cntabre++;
            }
        }

        cout << ((cntabre == cntCerra) ? "YES" : "NO") << "\n";
    }

    return 0;
}