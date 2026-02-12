// Autor: Mintwi
// Fecha: 2026-02-11

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        k = min(k,30);

        cout << min((1 << k),n+1) << "\n";
    }

    return 0;
}