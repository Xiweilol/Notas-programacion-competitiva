#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n, m; cin >> n >> m;

        if(n >= m){
            cout << n + 1 << "\n";
        } else {
            cout << m + 1 << "\n";
        }
    }

    return 0;
}