// Autor: Mintwi
// Fecha: 2025-12-25

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll maximo = *max_element(a.begin(),a.end());

        while(m--){
            char c; cin >> c;
            int l, r; cin >> l >> r;

            if(maximo >= l && maximo <= r){
                if(c == '+'){
                    maximo++;
                } else {
                    maximo--;
                }
                
            } 
            cout << maximo << " ";
        }

        cout << "\n";
    }

    return 0;
}