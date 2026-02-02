// Autor: Mintwi
// Fecha: 2026-02-02

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


        int n,q; cin >> n >> q;

        vector <ll> p(n+1);

        for(int i = 1; i <= n; i++){
            cin >> p[i];
        }

        sort(p.begin()+1,p.end());
        vector <ll> pref(n+1);

        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + p[i];
        }

        while(q--){
            ll x,y; cin >> x >> y;

            cout << pref[n-x+y] - pref[n-x] << "\n";
        }

    

    return 0;
}