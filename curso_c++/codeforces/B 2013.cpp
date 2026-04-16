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

        vector <ll> a(n);

        ll sum = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];

            sum += a[i];
        }

        sum -= 2 * a[n-2];

        cout << sum << "\n";

    }

    return 0;
}   