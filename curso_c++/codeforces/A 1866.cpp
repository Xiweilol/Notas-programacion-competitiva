// Autor: Mintwi
// Fecha: 2025-10-23

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


        int n; cin >> n;

        int ans = 1e5;

        for(int i = 0; i < n; i++){
            int A; cin >> A;

            ans = min(ans,abs(A));
        }

        cout << ans << "\n";

    return 0;
}