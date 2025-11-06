// Autor: Mintwi
// Fecha: 2025-11-06

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector <int> arr(n);

 
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];

        if(arr[i] == 1){
            cnt++;
        }
    }

    cout << cnt << "\n";

    
    vector <int> ans;
    bool valido = true;
    for (int i = n - 1; i >= 0; i--){
        if (i == n - 1 || arr[i + 1] == 1){
            ans.push_back(arr[i]);
        }
    }

    reverse(ans.begin(),ans.end());

    for(auto& n : ans){
        cout << n << " ";
    }
    cout << "\n";
    return 0;
}