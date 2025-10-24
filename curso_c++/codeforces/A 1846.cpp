// Autor: Mintwi
// Fecha: 2025-10-23

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    while(t--){
        int ans = 0;
        int n; cin >> n;
        for(int i = 0; i < n; i++){
            int a,b; cin >> a >> b;
            if(b < a){
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}