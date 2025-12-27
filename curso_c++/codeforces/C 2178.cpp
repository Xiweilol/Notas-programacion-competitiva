// Autor: Mintwi
// Fecha: 2025-12-27

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

        int64_t ans = (int64_t) -1e18;

        int64_t negs = 0;

        for(int x : a){
            negs -= x;
        }

        negs += a[0];
        ans = max(ans,negs);

        int64_t plus = a[0];

        for(int i = 1; i < n; i++){
            negs += a[i];
            ans = max(ans,plus + negs);
            plus += abs(a[i]);
        }

        cout << ans << "\n";

    }

    return 0;
}