// Autor: Mintwi
// Fecha: 2026-02-10

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map <char,int> order;
    string lol = "7AB5CDE6FGHI3JKL1MNO9PQR2ST0UV4WXYZ8";
    for(int i = 0; i < lol.size(); i++){
        order[lol[i]] = i;
    }

    int n; cin >> n;

    vector <pair <char,int>> ans;
    for(int i = 0; i < n; i++){
        char c; cin >> c;

        ans.push_back({c,order[c]});
    }

    sort(ans.begin(),ans.end(),[](const auto& a, const auto& b){
        return a.second < b.second;
    });

    for(auto& [k,v] : ans){
        cout << k;
    }
    cout << "\n";

    return 0;
}
