// Autor: Mintwi
// Fecha: 2026-01-17

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, m, p,q;
        cin >> n >> m >> p >> q;

        if(n % p == 0 && q *(n /p) != m){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }
    }

    return 0;
}