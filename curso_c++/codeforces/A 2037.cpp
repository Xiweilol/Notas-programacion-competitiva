// Autor: Mintwi
// Fecha: 2025-10-20

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> freq(n+1,0);

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            freq[x]++;
        }

        int ans = 0;

        for(int i = 1; i <= n; i++){
            ans += freq[i] / 2;
        }

        cout << ans << "\n";
    }

    return 0;
}
