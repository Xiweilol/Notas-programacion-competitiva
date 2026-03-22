// Autor: Mintwi
// Fecha: 2026-03-22
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    int ans = 0;
    while(n--){
        int p,q; cin >> p >> q;

        if(q - p >= 2){
            ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}