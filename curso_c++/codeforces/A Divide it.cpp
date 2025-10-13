#include <iostream>

using namespace std;

int main(){
    int q; cin >> q;

    while (q--) {
        long long n; 
        cin >> n;

        int cnt = 0;
        while (true) {
            if (n == 1) {    
                cout << cnt << '\n';
                break;
            }
            if (n % 5 == 0) {
                n = (4 * n) / 5;
                ++cnt;
            } else if (n % 3 == 0) {
                n = (2 * n) / 3;
                ++cnt;
            } else if (n % 2 == 0) {
                n /= 2;
                ++cnt;
            } else {
                cout << -1 << '\n';
                break;
            }
        }
    }
    return 0;
}