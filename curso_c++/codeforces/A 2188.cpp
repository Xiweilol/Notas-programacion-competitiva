// Autor: Mintwi
// Fecha: 2026-01-29

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        int need = 1;
        int temp = n;
        vector <int> ans(n);

        for(int i = 0; i < n; i += 2){
            ans[i] = temp;
            temp--; 
        }

        for(int i = 1; i < n; i += 2){
            ans[i] = need;
            need++;
        }

        reverse(ans.begin(),ans.end());

        for(auto& num : ans){
            cout << num << " ";
        }

        cout << "\n";
    }

    return 0;
}