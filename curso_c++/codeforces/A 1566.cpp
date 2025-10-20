// Autor: Mintwi
// Fecha: 2025-10-20

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,s; cin >> n >> s;

        int m = n / 2 + 1;

        int ans = s / m;

        cout << ans << "\n";
    }

    return 0;
}