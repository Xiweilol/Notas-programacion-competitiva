#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long sum = a + b + c;

        long long full_cycles = n / sum;      
        long long days = full_cycles * 3;      
        long long rem = n - full_cycles * sum; 

        if (rem == 0) {
            cout << days << "\n";
        } else if (rem <= a) {
            cout << days + 1 << "\n";
        } else if (rem <= a + b) {
            cout << days + 2 << "\n";
        } else {
            cout << days + 3 << "\n";
        }
    }
    return 0;
}
