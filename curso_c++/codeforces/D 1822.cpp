// Autor: Mintwi
// Fecha: 2026-01-22

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n == 1){
            cout << n << "\n";
            continue;
        }

        if(n & 1){
            cout << -1 << "\n";
        } else{
            for(int i = 0; i < n; i++){
                if(i % 2){
                    cout << i << "\n";
                } else{
                    cout << n - i << "\n";
                }
            }
        }
    }

    return 0;
}