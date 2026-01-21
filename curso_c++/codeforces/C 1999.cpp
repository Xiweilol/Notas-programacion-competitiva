// Autor: Mintwi
// Fecha: 2026-01-20

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;

        ll last = 0;
        bool ok = false;
        while(n--){
            int l,r; cin >> l >> r;

            if(l- last >= s){
                ok = true;
            }

            last = r;
        }

        if(m - last >= s){
            ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}