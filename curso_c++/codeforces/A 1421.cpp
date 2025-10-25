// Autor: Mintwi
// Fecha: 2025-10-25

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;

        cout << (a ^ b) << "\n";
    }

    return 0;
}