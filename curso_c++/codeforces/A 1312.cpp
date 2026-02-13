// Autor: Mintwi
// Fecha: 2026-02-12
// Theory number hater :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        cout << (n % m == 0 ? "YES" : "NO") << "\n";
    }

    return 0;
}