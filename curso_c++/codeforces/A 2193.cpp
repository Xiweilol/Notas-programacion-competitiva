// Autor: Mintwi
// Fecha: 2026-01-25

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,s,x; 
        cin >> n >> s >> x;

        int sum = 0;

        for(int i = 0; i < n; i++){
            int a; cin >> a;

            sum += a;
        }

        if(sum > s){
            cout << "NO\n";
            continue;
        } else if( sum == s){
            cout << "YES\n";
            continue;
        }

        bool ok = false;

        while(sum < s){
            sum += x;

            if(sum == s){
                ok = true;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");

    }

    return 0;
}