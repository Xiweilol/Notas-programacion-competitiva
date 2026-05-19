// Autor: Mintwi
// Fecha: 2026-05-18
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
        ll n,x1,x2,k; cin >> n >> x1 >> x2 >> k;

        if(n == 2 || n == 3){
            cout << 1 << "\n";
            continue;
        }
        ll distancia = abs(x1-x2);
        
        ll ans = min(distancia,n-distancia) + k;

        
        cout << ans << "\n";
    }

    return 0;
}