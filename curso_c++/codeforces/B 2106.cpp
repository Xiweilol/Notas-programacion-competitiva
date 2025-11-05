// Autor: Mintwi
// Fecha: 2025-11-05

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;

        if(n <= x){
            for(int i = 0; i < n; i++){
                cout << i << " ";
            }
            cout << "\n";
        } else {
            for(int i = 0; i < n; i++){
                if(i == x){
                    continue;
                }
                cout << i << " ";
            }
            cout << x << "\n";
        }

    }

    return 0;
}