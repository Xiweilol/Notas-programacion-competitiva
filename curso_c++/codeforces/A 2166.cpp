// Autor: Mintwi
// Fecha: 2025-11-16

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        int ans = 0;

        char change = s[n-1];
        for(char& c : s){
            if(c != change){
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}