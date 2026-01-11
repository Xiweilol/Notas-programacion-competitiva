// Autor: Mintwi
// Fecha: 2026-01-11

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

        int ans = 1, cnt = 1;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                cnt = 1;
            } else {
                cnt++;
            }

            ans = max(ans,cnt);
        }

        cout << ans + 1 << "\n";

    }

    return 0;
}