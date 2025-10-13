#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int ans = 0;
        int negative = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(a == 0){
                ans++;
            } else if(a < 0){
                negative++;
            }
        }

        if(negative % 2 == 0){
            cout << ans << "\n";
        } else {
            cout << ans + 2 << "\n";
        }
        
    }
    return 0;

}