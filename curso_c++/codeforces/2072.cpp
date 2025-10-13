#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,k,p; cin >> n >> k >> p;

        if(k == 0){
            cout << 0 << "\n";
            continue;
        }
        int maximo = p * n;
        int minimo = -p * n;

        if(k >= minimo && k <= maximo){
            k = abs(k);
            cout << (k / p) + (k % p != 0) << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}