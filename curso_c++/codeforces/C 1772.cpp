// Autor: Mintwi
// Fecha: 2026-01-27

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int k,n; cin >> k >> n;

        int curr = 1;
        int diff = 1;

        for(int i = 1; i <= k; i++){
            cout << curr << " ";

            int rest = k - i;

            if(curr + diff +(rest - 1) <= n){
                curr += diff;
                diff++;
            } else {
                curr++;
            }
        }
        cout << "\n";
    }

    return 0;
}