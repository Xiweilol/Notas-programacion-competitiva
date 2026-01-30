// Autor: Mintwi
// Fecha: 2026-01-30

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

        s += s;
        n *= 2;

        int curr = 0;
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                curr = 0;
            } else{
                curr++;
            }

            ans = max(ans,curr);
        }

        cout << ans << "\n";
    }

    return 0;
}