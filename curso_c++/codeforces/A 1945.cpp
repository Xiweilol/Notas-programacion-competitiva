// Autor: Mintwi
// Fecha: 2025-12-01

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;

        ll ans = 0;

        if(b % 3 == 1){
            c -= 2;
        } else if(b % 3 == 2){
            c -= 1;
        }

        if(c < 0){
            cout << -1 << "\n";
            continue;
        }

        
        if(c == 0){
            ans = a + (b / 3) + (b % 3 != 0);    
        } else{
            ans = a + (b / 3) + (b % 3 != 0) + (c / 3) + (c % 3 != 0);
        }
        

        cout << ans << "\n";
    }

    return 0;
}