// Autor: Mintwi
// Fecha: 2025-12-03

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        if(a[1] == -1){
            a[1] = a[n];
        }
        if(a[n] == -1){
            a[n] = a[1];
        }

        for(int i = 1; i <= n; i++){
            if(a[i] == -1){
                a[i] = 0;
            }
        }

        cout << abs(a[n] - a[1]) << "\n";

        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}