// Autor: Mintwi
// Fecha: 2026-02-12
// Theory number hater :( 
//editorial
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n,m,x; cin >> n >> m >> x;

        ll posx = ((x-1) % n) + 1;
        ll posy =(x + n - 1) / n;
        int64_t ans = (posx-1) *m + posy;

        cout << ans << "\n";
    }

    return 0;
}