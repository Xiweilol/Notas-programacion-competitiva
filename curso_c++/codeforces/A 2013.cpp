// Autor: Mintwi
// Fecha: 2026-04-15
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

        int x,y; cin >> x >> y;

        cout << (n / min(x,y)) + (n % min(x,y) != 0) << "\n";
    }

    return 0;
}