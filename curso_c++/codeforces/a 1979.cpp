// Autor: Mintwi
// Fecha: 2025-12-18

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

        int minimo = 1e9;

        for(int i = 1; i < n;i++){
            minimo = min(minimo,max(a[i-1],a[i]));
        }

        cout << minimo - 1 << "\n";
    }

    return 0;
}