// Autor: Mintwi
// Fecha: 2026-01-25

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;

        vector <int64_t> a(n+1);
        vector <int64_t> b(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }

        for(int i = 1; i <= n; i++){
            if(a[i] < b[i]){
                a[i] = b[i];
            }
        }

        for(int i = n-1; i >= 1; i--){
            if(a[i+1] > a[i]){
                a[i] = a[i+1];
            }
        }

        vector <int64_t> pref(n+1,0);

        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + a[i];
        }

        while(q--){
            int l,r; cin >> l >> r;

            cout << pref[r] - pref[l-1] << " ";
        }

        cout << "\n";

    }

    return 0;
}