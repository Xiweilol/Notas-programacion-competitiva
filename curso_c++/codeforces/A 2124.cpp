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

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int pos = -1;

        for(int i = 0; i+1 < n; i++){
            if(a[i] > a[i+1]){
                pos = i;
                break;
            }
        }

        if(pos == -1){
            cout << "NO\n";
        } else{
            cout << "YES\n2\n";
            cout << a[pos] << " " << a[pos+1] << "\n";
        }

    }

    return 0;
}