// Autor: Mintwi
// Fecha: 2026-04-06
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        
        if(n == 1){
            cout << 1 << "\n";
            cout << 1 << "\n";
            continue;
        }
        if(k == 1 || k == n){
            cout << -1 << "\n";
            continue;
        }

        
    }

    return 0;
}