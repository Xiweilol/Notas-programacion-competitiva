// Autor: Mintwi
// Fecha: 2026-01-23

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int sum = 0;

        for(int i = 0; i < n; i++){
            int a; cin >> a;
            sum += a;
        }

        if(sum & 1){
            cout << "NO\n";
        } else{
            cout << "YES\n";
        }

    }

    return 0;
}