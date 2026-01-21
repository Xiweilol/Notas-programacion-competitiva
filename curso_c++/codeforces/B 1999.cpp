// Autor: Mintwi
// Fecha: 2026-01-20

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int gan(int a, int b){
    if(a > b) return 1;
    if(a == b) return 0;
    if(a < b) return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ans = 0;
        if(gan(a1,b1) + gan(a2,b2) > 0){
            ans++;
        }

        if(gan(a1,b2) + gan(a2,b1) > 0){
            ans++;
        }

        if(gan(a2,b1) + gan(a1,b2) > 0){
            ans++;
        }

        if(gan(a2,b2) + gan(a1,b1) > 0){
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}