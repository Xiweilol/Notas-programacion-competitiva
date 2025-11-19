// Autor: Mintwi
// Fecha: 2025-11-18

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n < 10){
            cout << n << "\n";
        } else if(n >= 10 && n < 100){
            cout << (n / 10) + 9 << "\n";
        } else if(n >= 100 && n < 1000){
            cout << (n / 100) + 18 << "\n";
        } else if(n >= 1000 && n < 10000){
            cout << (n / 1000) + 27 << "\n";
        } else if(n >= 10000 && n < 100000){
            cout << (n / 10000) + 36 << "\n";
        } else if(n >= 100000 && n < 1000000){
            cout << (n / 100000) + 45 << "\n";
        }
    }

    return 0;
}