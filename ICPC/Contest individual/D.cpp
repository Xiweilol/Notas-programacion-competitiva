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

    int n; cin >> n;

    vector <ll> a(n);

    ll sum = 0;

    for(int i = 0; i < n; i++){
        ll ai; cin >> ai;

        sum += ai;
    }

    ll aum = n -1;

    cout << (sum / aum) + (sum % aum != 0) << "\n";


    return 0;
}