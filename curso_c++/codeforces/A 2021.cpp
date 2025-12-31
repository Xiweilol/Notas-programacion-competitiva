// Autor: Mintwi
// Fecha: 2025-12-31

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        ll ans = (a[0] + a[1]) / 2;
        for(int i = 2; i < n; i++){
            ans = (a[i] + ans) / 2; 
        }

        cout << ans << "\n";
    }

    return 0;
}