// Autor: Mintwi
// Fecha: 2026-01-01

#include <bits/stdc++.h>

typedef long long ll;
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

        bool ok = true;

        for(int i = 1; i < n; i++){
            int temp = abs(a[i] - a[i-1]);
            if(temp != 5 && temp != 7){
                ok = false;
                break;
            }
        }

        if(ok){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }
    }

    return 0;
}