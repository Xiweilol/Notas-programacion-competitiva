#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        unordered_map <int,int> cont;

        for(int i = 0; i < n ; i++){
            int a ; cin >> a;
            cont[a]++;
        }

        auto max_it = max_element(cont.begin(),cont.end(),[](const auto& a, const auto& b){
            return a.second < b.second;
        });
        int ans = max_it->second;

        cout << n - ans << "\n";
    }

    return 0;
}