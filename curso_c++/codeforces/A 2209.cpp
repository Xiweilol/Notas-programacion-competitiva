// Autor: Mintwi
// Fecha: 2026-04-08
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
        ll n,c,k; cin >> n >> c >> k;

        vector <ll> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(),a.end());

        for(int i = 0; i < n;i++){
            ll need = c - a[i];

            if(k > 0 && k >= need && need > 0){
                a[i] += need;
                k -= need;
            } else if(k > 0 && k < need){
                a[i] += k;
                k = 0;
            }

            if(c >= a[i]){
                c += a[i];
            } else{
                break;
            }
        }

        cout << c << "\n";
    }

    return 0;
}