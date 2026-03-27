// Autor: Mintwi
// Fecha: 2026-03-27
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
        int l,r; cin >> l >> r;

        int cnt = 0;

        while(r != 1){
            r /= 2;
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}