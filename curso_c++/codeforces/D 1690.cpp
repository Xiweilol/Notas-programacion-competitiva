// Autor: Mintwi
// Fecha: 2025-10-27

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        string s; cin >> s;

        int sum = 0;

        for(int i = 0; i < k; i++){
            if(s[i] == 'W'){
                sum++;
            }
        }

        int ans = sum;

        for(int i = k; i < n; i++){
            if(s[i-k] == 'W'){
                sum--;
            }

            if(s[i] == 'W'){
                sum++;
            }

            ans = min(ans,sum);
        }

        cout << ans << "\n";

    }

    return 0;
}