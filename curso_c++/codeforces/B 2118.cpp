// Autor: Mintwi
// Fecha: 2026-03-04
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

        cout << 2 * n - 1 << "\n";

        for(int i = 1; i < n; i++){
            //rotar cada renglon
            cout << i << " " << 1 << " " << i << "\n";
            cout << i << " " << i+1 << " " << n << "\n";
        }

        cout << n << " 1 " << n << "\n";
    }

    return 0;
}