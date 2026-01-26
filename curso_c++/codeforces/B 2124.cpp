// Autor: Mintwi
// Fecha: 2026-01-26

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        if(a[0] <= a[1]){
            cout << 2 * a[0] << "\n";
        } else {
            cout << a[0] + a[1] << "\n";
        }
    }

    return 0;
}