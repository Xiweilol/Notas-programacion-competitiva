// Autor: Mintwi
// Fecha: 2025-10-18

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long l,r; cin >> l >> r;

        long long low = 1, high = 1'000'000'000LL;

        //rangos del true
        r -= l;

        int64_t ans = 0;
        while(low <= high){
            int64_t mid = (low + high) / 2;

            if(mid*(mid-1)/2 <= r){
                low = mid + 1;
                ans = mid;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}