// Autor: Mintwi
// Fecha: 2026-04-11
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
        int a,b; cin >> a >> b;
        
        cout << (a % b == 0 ? 0 : b - a %b) << "\n";
    }

    return 0;
}