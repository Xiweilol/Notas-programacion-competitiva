// Autor: Mintwi
// Fecha: 2025-10-18

#include <bits/stdc++.h>
using namespace std;



bool is_sqrt(long long x){
    long long l = 0, r = 1e9;

    while(l <= r){
        long long mid = l + (r - l) / 2;

        if(mid * mid == x){
            return true;
        } else if(mid * mid < x){
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long n; cin >> n;

        long long sum = 0;

        for(int i = 0; i < n; i++){
            long long a; cin >> a;
            sum += a ;
        }

        cout << (is_sqrt(sum) ? "YES\n" : "NO\n");
    }

    return 0;
}
