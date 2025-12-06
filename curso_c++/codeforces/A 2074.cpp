// Autor: Mintwi
// Fecha: 2025-12-06

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int l,r,d,u;
        cin >> l >> r >> d >> u;

        set <int> S;

        S.insert(l);
        S.insert(r);
        S.insert(d);
        S.insert(u);

        if(S.size() > 1){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}