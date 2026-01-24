// Autor: Mintwi
// Fecha: 2026-01-23

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b,c; cin >> a >> b >> c;

        int mx = max(a,b);

        int mn = min(a,b);

        int cnt = 0;
        while(mx > mn){
            mn += c;
            mx -= c;
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}