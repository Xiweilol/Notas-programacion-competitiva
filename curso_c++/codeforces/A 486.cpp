// Autor: Mintwi
// Fecha: 2026-03-23
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    ll ans = 0;

    ll even = 0;
    ll odd = 0;
    ll temp = 0;
    if(n % 2 == 0){
        temp = n/2;
        even = temp*(temp+1);
        n--;
        odd = (((n+1)/2) * ((n+1)/2));
    } else {
        odd = (((n+1)/2) * ((n+1)/2));
        n--;
        temp = n/2;
        even = temp*(temp+1);
    }

    ans = even-odd;

    cout << ans << "\n";

    return 0;
}