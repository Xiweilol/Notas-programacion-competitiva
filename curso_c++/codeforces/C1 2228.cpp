// Autor: Mintwi
// Fecha: 2026-05-18
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
        ll a; cin >> a;
        int n; cin >> n;

        ll d1,d2; cin >> d1 >> d2;

        int tempd1 = d1;
        int tempd2 = d2;
        ll ans = LLONG_MAX;
        for(int i = 0; i <= 17; i++){
            ans = min({ans,abs(a-d1),abs(a-d2)});
            d1 = (d1*10) + tempd1;
            d2 = (d2*10) + tempd2; 

        }
    }

    return 0;
}