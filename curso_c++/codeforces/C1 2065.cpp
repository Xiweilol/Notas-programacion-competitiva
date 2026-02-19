// Autor: Mintwi
// Fecha: 2026-02-18
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        vector <ll> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        ll b; cin >> b;

        bool ok = true;

        int act = max(a[n],b-a[n]);
        

        for(int i = n-1; i > 0; i--){
            ll temp = INT_MIN;
            if(a[i] <= act){
                temp = max(temp,a[i]);
            }

            if(b - a[i] <= act){
                temp = max(temp,b - a[i]);
            }

            if(temp == INT_MIN){
                ok = false;
                break;
            } else {
                act = temp;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";


    }

    return 0;
}