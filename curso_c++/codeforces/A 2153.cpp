#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        
        unordered_set <int> ans;

        for(int i = 0; i < n; i++){
            int b;cin >> b;

            ans.insert(b);
        }

        cout << ans.size() << "\n";
    }

    return 0;
}