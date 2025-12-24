// Autor: Mintwi
// Fecha: 2025-12-23

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/* observacon
Una vez que empiece a juntar varias factores
nunca puede ser primo ya que es divisible entre su numero original

solo hay que checar cuando el k == 1, si el numero original es primo y ya
*/



bool prime(int x){
    if(x == 1) return false;

    for(int i = 2; i * i <= x ; i++){
        if(x % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int x, k; cin >> x >> k;


        if(k > 1 && x > 1){
            cout << "NO\n";
        } else if(k == 1){
            cout << (prime(x) ? "YES\n" : "NO\n");
        } else {
            cout << (k == 2 ? "YES\n" : "NO\n");
        }

    }

    return 0;
}