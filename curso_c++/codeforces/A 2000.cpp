#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        if((n >= 1010 && n < 1100) || (n > 101 && n < 110)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}