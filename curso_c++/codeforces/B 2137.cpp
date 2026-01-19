// Autor: Mintwi
// Fecha: 2026-01-19

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> p(n);

        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        int num = n+1;
        for(int i = 0; i < n; i++){
            cout << num - p[i] << "\n";
        }
    }

    return 0;
}