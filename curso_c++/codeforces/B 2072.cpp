// Autor: Mintwi
// Fecha: 2025-12-26

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        string s; cin >> s;

        ll cnt = count(s.begin(),s.end(),'-');

        ll so = n - cnt;

        ll ans = ((cnt * cnt) / 4) * so;

        cout << ans <<"\n";
    }

    return 0;
}