#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long x; cin >> x;
    int c; cin >> c;

    unsigned long long cnt = x / (1000 + c);
    long long ans = cnt * 1000;
    cout << ans << "\n";

    return 0;
}