// Autor: Mintwi
// Fecha: 2026-01-22

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int64_t> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        int64_t mx = -1e18;

        for(int i = 1; i < n; i++){
            mx = max(mx,a[i-1] * a[i]);
        }

        cout << mx << "\n";
    }

    return 0;
}