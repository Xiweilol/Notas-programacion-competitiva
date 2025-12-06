// Autor: Mintwi
// Fecha: 2025-12-06

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int sum = accumulate(a.begin(),a.end(),0ll);

        cout << sum - n + 1 << "\n";

    }

    return 0;
}