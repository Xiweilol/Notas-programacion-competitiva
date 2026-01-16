// Autor: Mintwi
// Fecha: 2026-01-16

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int x1,x2,x3; cin >> x1 >> x2 >> x3;

        int ans = 20;
        for(int i = 1; i <= 10; i++){
            ans = min(ans,abs(i-x1) +abs(i-x2)+ abs(i-x3));
        }

        cout << ans << "\n";
    }

    return 0;
}