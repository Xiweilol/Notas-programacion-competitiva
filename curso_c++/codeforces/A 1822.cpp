// Autor: Mintwi
// Fecha: 2026-01-22

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q; cin >> q;
    while(q--){
        int n,t; cin >> n >> t;

        vector <int> a(n);
        vector <int> b(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int mx_idx = -1;

        int mx_en = -10000;

        for(int i = 0; i < n; i++){
            if(t >= a[i]){
                if(b[i] >= mx_en){
                    mx_en = b[i];
                    mx_idx = i;
                }
            }

            t--;
        }

        if(mx_idx == -1){
            cout << mx_idx << "\n";
        } else {
            cout << mx_idx + 1 << "\n";
        }
        

    }

    return 0;
}