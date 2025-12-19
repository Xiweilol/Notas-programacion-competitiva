// Autor: Mintwi
// Fecha: 2025-12-19

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

        for(int i = 0; i < n;i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        ll sum = 0;
        for(int i = 1; i < n; i++){
            sum += a[i] - a[i-1];
        }

        cout << sum << "\n";
     }

    return 0;
}