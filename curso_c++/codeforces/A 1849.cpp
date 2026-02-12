// Autor: Mintwi
// Fecha: 2026-02-11

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int b,c,h; cin >> b >> c >> h;

        b -= 2;
        
        int mid = c + h;

        mid--;

        int ans = 3;

        while(b > 0 && mid > 0){
            if(mid > 0){
                mid--;
                ans++;
            }
            if(b > 0){
                b--;
                ans++;
            }

        }

        cout << ans << "\n";
    }

    return 0;
}