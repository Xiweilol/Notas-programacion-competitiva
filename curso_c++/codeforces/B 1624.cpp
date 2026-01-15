// Autor: Mintwi
// Fecha: 2026-01-14

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;

        ll as = 2*b - c;

        if(as >= a && as % a == 0 && as != 0){
            cout << "YES\n";
            continue;
        }

        ll bs = (c+a) / 2;
        // la suma debe de ser par
        if(bs >= b && bs % b == 0  && (c + a ) % 2 == 0 && bs != 0){
            cout << "YES\n";
            continue;
        }

        ll cs = 2 * b - a;

        if(cs >= c && cs % c == 0 && cs != 0){
            cout << "YES\n";
            continue;
        }

        cout << "NO\n";
    }

    return 0;
}