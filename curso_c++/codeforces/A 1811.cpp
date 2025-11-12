// Autor: Mintwi
// Fecha: 2025-11-12

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,d; cin >> n >> d;

        string s; cin >> s;

        
        d += '0';

        string ans = s;
        bool pas = true;
        for(int i = 0; i < n; i++){
            if(s[i] < d){
                ans.insert(i,1,d);
                pas = false;
                break;
            } 
        }

        if(pas){
            ans += d;
        }

        cout << ans << "\n";
    }

    return 0;
}