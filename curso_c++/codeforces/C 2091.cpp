// Autor: Mintwi
// Fecha: 2025-11-17

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n % 2 == 0){
            cout << -1 << "\n";
            continue;
        }

        for(int i = n; i > 0; i--){
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}