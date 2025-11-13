// Autor: Mintwi
// Fecha: 2025-11-13

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;

        ll i = 1;
        while(n%i == 0){
            i++;
        }

        cout << (i-1) << "\n";
    }

    return 0;
}