// Autor: Mintwi
// Fecha: 2025-11-04

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string abc = " abcdefghijklmnopqrstuvwxyz";

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        int r = n - 1;
        string ans = "";
        while(r >= 0){
            if(s[r] != '0'){
                ans += abc[s[r] - '0'];

                r--;
            } else {
                int digit1 = s[r-2] - '0';
                int digit2 = s[r-1] - '0';

                int temp = digit1 * 10 + digit2;
                ans += abc[temp];
                r -= 3;
            }
            
        }

        reverse(ans.begin(),ans.end());

        cout << ans << "\n";
    }

    return 0;
}