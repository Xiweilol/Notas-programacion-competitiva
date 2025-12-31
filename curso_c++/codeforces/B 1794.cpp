// Autor: Mintwi
// Fecha: 2025-12-31

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> a(n+1,0);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
            if(a[i] == 1){
                a[i]++;
            }
        }

        for(int i = 2; i <= n; i++){
            if(a[i] % a[i-1] == 0){
                a[i]++;
            } 
            
        }
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}