// Autor: Mintwi
// Fecha: 2025-11-11

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        string ans(n,'0');

        for(int i = 0; i < k; i++){
            
            ans[i] = '1';
        }

        cout << ans << "\n";
    }

    return 0;
}