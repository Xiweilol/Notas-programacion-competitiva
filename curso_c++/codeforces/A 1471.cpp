// Autor: Mintwi
// Fecha: 2026-02-03

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll n,x; cin >> n >> x;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll mx = 0;
        for(int i = 0; i < n; i++){
            mx += (a[i] + x - 1) / x;
        }

        ll mn = accumulate(a.begin(),a.end(),0LL);

        mn  = (mn + x - 1) / x;
        cout << mn << " " << mx << "\n"; 


    }

    return 0;
}