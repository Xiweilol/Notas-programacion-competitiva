#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int mx = INT_MIN;

    vector <int> ans;

    for(int i = 0; i < n; i++){
        int p; cin >> p;
        if(p > mx){
            ans.push_back(p);
            mx = p;
        }
    }

    cout << ans.size() << "\n";
    for(int num : ans){
        cout << num << " ";
    }
}