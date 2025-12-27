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
        string r; cin >> r;

        int len = r.size();
        int ans = 0;
        if(r[0] != 's'){
            ans++;
            r[0] = 's';
        }
        if(r[len-1] != 's'){
            ans++;
            r[len-1] = 's';
        }

        
        for(int i = 1; i < len - 1; i++){
            if(r[i] == 'u' && r[i+1] == 'u'){
                r[i+1] = 's';
                ans++;
                i++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}