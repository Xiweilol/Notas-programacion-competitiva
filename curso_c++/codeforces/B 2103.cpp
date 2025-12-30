// Autor: Mintwi
// Fecha: 2025-12-30

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

        s = "0" + s;

        int ans = 0, curr = s[0];

        for(int i = 1; i<=n; i++){
            int dig = s[i];
            if(curr != dig){
                ans++;
            }
            curr = dig;
        }

        if(ans >= 3){
            cout << ans - 2 + n << "\n";
        } else if( ans == 2){
            cout << ans - 1 + n << "\n";
        } else{
            cout << ans + n << "\n";
        }
    }

    return 0;
}