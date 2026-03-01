//mintwi
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


const ll mod = 1e18;
int main(){
    int n; cin >> n;
    ll t; cin >> t;

    vector <ll> k(n);

    for(int i = 0; i < n; i++) cin >> k[i];

    ll l = 0, r = 1e18;

    ll ans = 0;
    while(l <= r){
        ll mid = (l + r) / 2;
        //cout << "Valor mid: " << mid <<" "<<"Indice l: " << l << " Indice r: " << r << "\n";
        ll products = 0;
        for(int i = 0; i < n; i++){
            if(products + (mid / k[i]) >= mod){
                break;
            }
            products += mid / k[i] ;
        }
        //cout << "Valor products: " << products << "\n";
        if(products >= t){
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << "\n";

}