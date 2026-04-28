// Autor: Mintwi
// Fecha: 2026-04-27
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x; cin >> n >> x;

    map <ll,ll> m;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ll ai; cin >> ai;

        ll lol = ai % x;
        if((ai * ai) % x == 0){
            
            ans += m[((x - (lol)) % x)];
            
        }

        m[lol]++;
    }

    cout << ans << "\n";
    return 0;
}