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
        int n,x; cin >> n >> x;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int sum = accumulate(a.begin(),a.end(),0);

        if(sum == x * n){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}