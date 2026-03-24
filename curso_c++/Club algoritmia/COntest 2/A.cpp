#include <bits/stdc++.h>

typedef long long ll;
using namespace std;





int main(){
    set <ll> potencias;

    for(int i = 0; i <= 30; i++){
        ll po = (1 << i);
        potencias.insert(po);
    }

    int t; cin >> t;

    while(t--){
        ll n; cin >> n;

        ll sum = n*(n+1) / 2;

        ll p = 1;
        //restar potencia de 2
        while(p <= n){
            sum -= 2 * p;
            p *= 2;
        }
        

        cout << sum << "\n";
    }
}