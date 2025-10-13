#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t--){
        int a,b,c,d; cin >> a >> b >> c >> d;

        int F1 = min(a,b) * 2 + 2;
        if(max(a,b) <= F1){
            c -= a;
            d -= b;
            int F2 = min(c,d) * 2 + 2;
            if(max(c,d) <= F2){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}