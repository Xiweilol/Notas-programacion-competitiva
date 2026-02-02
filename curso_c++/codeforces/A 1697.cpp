// Autor: Mintwi
// Fecha: 2026-02-02

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = accumulate(a.begin(),a.end(),0);

        ans -= m;
        if(ans <= 0){
            cout << 0 << "\n";
        } else{
            cout << ans << "\n";
        }
    }

    return 0;
}