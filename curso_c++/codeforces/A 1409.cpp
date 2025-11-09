// Autor: Mintwi
// Fecha: 2025-11-09

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b; cin >> a >> b;
        int ans = 0;
        if(a > b){
            ans = (a-b) + 9;
            cout << ans / 10 << "\n";
        } else if(b > a){
            ans = (b-a) + 9;
            cout << ans / 10 << "\n";            
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}