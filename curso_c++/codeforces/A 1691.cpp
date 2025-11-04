// Autor: Mintwi
// Fecha: 2025-11-04

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int cnt_impar = 0;

        for(int i = 0; i < n; i++){
            int a; cin >> a;

            if(a & 1){
                cnt_impar++;
            }
        }

        cout << min(cnt_impar,n-cnt_impar) << "\n";
    }

    return 0;
}