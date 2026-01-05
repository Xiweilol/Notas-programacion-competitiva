// Autor: Mintwi
// Fecha: 2026-01-05

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        vector<int> d(4);
        for (int i = 0; i < 4; i++) {
            d[i] = s[i] - '0';
            if (d[i] == 0) d[i] = 10; 
        }

        int ans = 4; 
        ans += abs(d[0] - 1);
        ans += abs(d[1] - d[0]);
        ans += abs(d[2] - d[1]);
        ans += abs(d[3] - d[2]);

        cout << ans << "\n";
    }

    return 0;
}