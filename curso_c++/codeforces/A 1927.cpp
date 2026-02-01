// Autor: Mintwi
// Fecha: 2026-02-01

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        int l = 0,r = n-1;
        
        while(s[l] != 'B' || s[r] != 'B'){
            if(s[l] == 'W'){
                l++;
            }

            if(s[r] == 'W'){
                r--;
            }
        }

        cout << r - l + 1 << "\n";
    }

    return 0;
}