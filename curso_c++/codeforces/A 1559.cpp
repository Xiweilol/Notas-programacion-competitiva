// Autor: Mintwi
// Fecha: 2026-01-16

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = a[0];
        for(int i = 1; i < n; i++){
            ans &= a[i];
        }

        cout << ans << "\n";
    }

    return 0;
}