// Autor: Mintwi
// Fecha: 2026-01-01

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        set <int> freq;

        int ans = 0;

        for(int i = 0; i < n; i++){
            if(freq.count(a[i])){
                ans++;
            }

            freq.insert(a[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}