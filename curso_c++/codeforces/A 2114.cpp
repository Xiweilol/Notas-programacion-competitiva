#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int s; cin >> s;

        int ans = pow(s,0.5);

        if(ans * ans == s){
            cout << 0 << " " << ans << "\n";
        } else {
            cout << -1 << "\n";
        }

    }

    return 0;
}