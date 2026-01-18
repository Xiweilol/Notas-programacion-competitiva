// Autor: Mintwi
// Fecha: 2026-01-18

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int m,a,b,c;

        cin >> m >> a >> b >> c;

        int ans = 0, so = 0;

        ans += min(m,a);
        ans += min(m,b);

        so += m - min(m,a);
        so += m - min(m,b);

        ans += min(so,c);

        cout << ans << "\n";

    }

    return 0;
}

