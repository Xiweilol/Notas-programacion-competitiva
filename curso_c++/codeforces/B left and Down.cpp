#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        long long a,b,k; cin >> a >> b >> k;

        long long n = gcd(a,b);

        (a/n <= k && b/n <= k) ? cout << 1 << "\n" : cout << 2 << "\n";
    }
    return 0;
}