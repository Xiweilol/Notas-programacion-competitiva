#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        long long n; cin >> n;
        if(n % 2050 != 0){
            cout << -1 << "\n";
            continue;
        }

        long long sol = n / 2050;
        long long ans = 0;
        while(sol > 0){
            ans += sol % 10;
            sol =  sol / 10;
        }

        cout << ans << "\n";
    }

    return 0;
}