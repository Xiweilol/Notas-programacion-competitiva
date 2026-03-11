// Autor: Mintwi
// Fecha: 2026-03-11
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    bool ok = false;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(a  == 1){
            ok = true;
        }
    }

    cout << (ok ? "HARD" : "EASY") << "\n";

    return 0;
}