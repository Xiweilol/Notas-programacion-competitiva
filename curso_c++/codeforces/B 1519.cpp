// Autor: Mintwi
// Fecha: 2025-11-01

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--){
        int n, m,k; cin >> n >> m >> k;

        int x = 0,y = 0;

        y = m-1;
        x = (n-1) * m;

        if(x <= 0 && y <= 0  && k == 0){
            cout << "YES\n";
            continue;
        }

        if(x + y == k){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;
}