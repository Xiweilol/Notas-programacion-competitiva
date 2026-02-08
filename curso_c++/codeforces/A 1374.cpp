// Autor: Mintwi
// Fecha: 2026-02-08

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll x,y,n; cin >> x >> y >> n;

        cout << x * ((n-y) /x) + y << "\n";
    }

    return 0;
}