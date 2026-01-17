// Autor: Mintwi
// Fecha: 2026-01-16

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

        sort(a.begin(),a.end());

        cout << 2 *(a[n-1] + a[n-2]) + 2 * (a[0] + a[1]) << "\n";
    }
    

    return 0;
}