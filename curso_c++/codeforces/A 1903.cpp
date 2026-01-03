// Autor: Mintwi
// Fecha: 2026-01-03

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n,k; cin >> n >> k;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        if((is_sorted(a.begin(),a.end())) || k >= 2){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }


    
    }
    return 0;
}