// Autor: Mintwi
// Fecha: 2026-02-28
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
        ll s,k,m;
        cin >> s >> k >> m;

        int ans = 0;
        if(s > k){
            m %=  2 * k; 
            if( k > m && m >= 0){
                ans = s - m;
            } else {
                ans = 2 * k - m;
            }
        } else {
            m %= k;
            if(s > m && m >= 0){
                ans = s - m;
            } else {
                ans = 0;
            }
        }
        
        cout << ans << "\n";
    }

    return 0;
}