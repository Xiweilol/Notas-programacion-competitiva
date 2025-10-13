#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int dif = 0;
        unordered_set <int> counts;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            counts.insert(a);
        }

        int ans = counts.size() + counts.size() - 1;

        cout << ans << "\n";
    }
}