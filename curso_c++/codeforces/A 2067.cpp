// Autor: Mintwi
// Fecha: 2025-11-14

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int x,y; cin >> x >> y;

        if((x + 1 - y) % 9 == 0 && x + 1 >= y){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}