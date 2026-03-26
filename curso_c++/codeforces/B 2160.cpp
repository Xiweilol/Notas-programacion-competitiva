// mintwi

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <ll> b(n+1);

        for(int i = 1; i <= n; i++) cin >> b[i];

        vector <int> ans(n+1,0);
        
        ans[1] = 1;
        int curr = 1;
        for(int i = 2; i <= n; i++){
            ll diff = b[i] - b[i-1];
            if(diff == i){
                curr++;
                ans[i] = curr;
            } else {
                ans[i] = ans[i-diff];
            }
        }

        for(int i = 1; i <= n; i++){
            cout << ans[i] << " ";
        }

        cout << "\n";
    }
}