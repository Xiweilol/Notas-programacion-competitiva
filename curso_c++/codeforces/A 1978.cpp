// Autor: Mintwi
// Fecha: 2025-10-25

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n % 2 != 0){
            cout << "NO\n";
        } else {
            cout << "YES\n";

            string ans = "";

            for(int i = 0; i < n/2; i++ ){
                char c = 'A' + i;
                ans.push_back(c);
                ans.push_back(c);
            }

            cout << ans << "\n";
        }

    }

    return 0;
}