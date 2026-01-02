// Autor: Mintwi
// Fecha: 2026-01-02

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int l,r; cin >> l >> r;

        int odds = (r+1) / 2 - (l/2);

        int ans = odds / 2;

        cout << ans << "\n";
    }

    return 0;
}