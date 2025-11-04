// Autor: Mintwi
// Fecha: 2025-10-31

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long n,a,b;
        cin >> n >> a >> b;

        long long k = 0;
        if(b > a){
            k = min(n,b-a);
        }

        long long promo_sum = k * (2 * b-k+1) / 2;
        long long normal = (n-k) * a;

        cout << promo_sum + normal << "\n";
    }

    return 0;
}