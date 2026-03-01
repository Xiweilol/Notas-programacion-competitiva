// Autor: Mintwi
// Fecha: 2026-02-28
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
        int n; cin >> n;

        if(n == 2 || n == 3){
            cout << n << "\n";
            continue;
        }
        if(n % 2 == 0 ){
            cout << 0;
        } else if(n & 1){
            cout << 1;
        }

        cout << "\n";
    }

    return 0;
}