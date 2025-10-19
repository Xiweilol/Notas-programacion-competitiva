// Autor: Mintwi
// Fecha: 2025-10-18

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int ans = (n + 4 - 1) / 4;

        cout << ans << "\n";
    }

    return 0;
}