// Autor: Mintwi
// Fecha: 2026-01-02

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        if(k == 1){
            cout << n << "\n";
            continue;
        }

        int ans = 0;
        while(n > 0){
            //convertir n en base k;
            ans += n % k;
            // disminuye en k en k

            n /= k;
        }

        cout << ans << "\n";
    }

    return 0;
}