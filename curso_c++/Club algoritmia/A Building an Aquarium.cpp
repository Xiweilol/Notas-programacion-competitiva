// Autor: Mintwi
// Fecha: 2026-02-06

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long n,x; cin >> n >> x;
        
        vector <long long> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }


        long long lo = 0, high = 2 * 1e9 + 7;
        long long ans = 0;
        while(lo < high){
            long long mid = lo + (high - lo) / 2;

            long long tot = 0;

            for(int i = 0; i < n; i++){
                if(a[i] <= mid){
                    tot += mid - a[i];
                }
                if(tot > x) break;
            }

            if(tot <= x){
                ans = mid;
                lo = mid + 1;
            } else {
                high = mid;
            }

        }

        cout << ans << "\n";


    }

    return 0;
}