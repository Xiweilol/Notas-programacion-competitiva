// Autor: Mintwi
// Fecha: 2025-12-08

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        map <int,int> freq;

        for(int i = 0; i < n; i++){
            int a; cin >> a;

            freq[a]++;
        }

        int ans = 0;
        for(auto& par :freq){
            ans += par.second / 3;
        }

        cout << ans << "\n";
    }

    return 0;
}