// Autor: Mintwi
// Fecha: 2026-01-04

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector <int> a(n);

        

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int mx = a[0];
        for(int i = 1; i < a.size();i++){
            mx = max(mx,abs(a[i]- a[i-1]));
        }

        mx = max(mx,2 * abs(x - a[n-1]));


        cout << mx << "\n";
    }

    return 0;
}