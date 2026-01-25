// Autor: Mintwi
// Fecha: 2026-01-25

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        for(int i = n; i >= 1; i++){
            cout << i << " ";
        }

        cout << n << " ";
        for(int i = 1; i < n; i++){
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}