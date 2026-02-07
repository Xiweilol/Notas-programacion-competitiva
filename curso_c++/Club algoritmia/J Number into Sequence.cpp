// Autor: Mintwi
// Fecha: 2026-02-06

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool prime(ll n){

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
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
        ll n; cin >> n;

        //generar criba
        vector <int> criba;

        for(int i = 2; i <= sqrt(n); i++ ){
            if(prime(i)){
                criba.push_back(i);
            }
        }

        map <ll,ll> freq;

        ll temp = n;

        
    }

    return 0;
}