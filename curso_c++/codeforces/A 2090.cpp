// Autor: Mintwi
// Fecha: 2025-11-27

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll x,y,a;
        cin >> x >> y >> a;

        if(x > a){
            cout << "NO\n";
            continue;
        }

        ll sum = x + y;
        int div =  a / sum;
        ll temp = sum * div;
        
        if(temp + x > a){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}