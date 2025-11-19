// Autor: Mintwi
// Fecha: 2025-11-18

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        set <ll> a;
        set <ll> b;

        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a.insert(x);
        }

        for(int i = 0; i < n; i++){
            int y; cin >> y;
            b.insert(y);
        }

        if(a.size() >= 3 || b.size() >= 3){
            cout << "YES\n";
        } else if(a.size() == 2 && b.size() == 2){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }

    return 0;
}