// Autor: Mintwi
// Fecha: 2025-10-26

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        
        long long sum = 0;

        for(int i = 0; i < n; i++){
            int a; cin >> a;
            sum += a;
        }
        if(sum <= 0 || sum < n){
            cout << 1 << "\n";
            continue;
        }
        cout << sum - n << "\n";

    }

    return 0;
}