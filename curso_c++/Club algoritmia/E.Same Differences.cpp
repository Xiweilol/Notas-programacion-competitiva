// Autor: Mintwi
// Fecha: 2026-02-05

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        map <ll, ll> freq;

        for(int i = 1; i <= n; i++){
            int ai; cin >> ai;

            freq[ai - i]++;
        }


        ll ans = 0;

        for(auto [k,v] : freq){
            ans += v * (v-1) / 2;
        }

        cout << ans << "\n";

        
    }

    return 0;
}