// Autor: Mintwi
// Fecha: 2025-12-05

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        if(n < m || ((n % 2) != (m % 2))){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}