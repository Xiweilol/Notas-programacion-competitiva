// Autor: Mintwi
// Fecha: 2026-01-21

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n <= 3){
            cout << n << "\n";
        } else {
            cout << 2 << "\n";
        }
    }

    return 0;
}