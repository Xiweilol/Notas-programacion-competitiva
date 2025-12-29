// Autor: Mintwi
// Fecha: 2025-12-29

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        vector <int> a(n+1,0);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        int acum = 0;
        int cnt = 0;

        for(int i = 1; i <= n; i++){
            if(acum > 0 && a[i] == 0){
                cnt++;
                acum--;
            }

            if(a[i] >= k){
                acum += a[i];
            }
        }

        cout << cnt << "\n";

    }

    return 0;
}