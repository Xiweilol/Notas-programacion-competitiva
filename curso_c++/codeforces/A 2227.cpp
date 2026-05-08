// Autor: Mintwi
// Fecha: 2026-05-06
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
        int x,y; cin >> x >> y;

        if((x & 1) && (y & 1)){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}