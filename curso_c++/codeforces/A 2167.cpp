// Autor: Mintwi
// Fecha: 2025-10-28

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b,c,d; cin >> a >> b >> c >> d;

        set <int> S;
        S.insert(a);
        S.insert(b);
        S.insert(c);
        S.insert(d);

        if(S.size() > 1){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}