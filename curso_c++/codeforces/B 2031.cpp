//Mintwi

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> a(n+1);

        for(int i = 1; i <= n; i++) cin >> a[i];

        bool ok = true;

        for(int i = 1; i < n; i++){
            if(a[i-1] != i && a[i] != i && a[i+1] != i){
                ok = false;
                break;
            }
        }

        if(a[n-1] != n && a[n] != n){
            ok = false;
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
}