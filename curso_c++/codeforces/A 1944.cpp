// Autor: Mintwi
// Fecha: 2025-12-16

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n,k; cin >> n >> k;

        if(k >= n-1){
            cout << 1 << "\n";
        } else{
            cout << n << "\n";
        }
    }

    return 0;
}