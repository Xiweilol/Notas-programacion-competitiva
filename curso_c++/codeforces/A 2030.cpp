// Autor: Mintwi
// Fecha: 2025-11-08

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> arr(n);
        
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());

        int cnt = n - 1;
        cout << cnt * (arr[cnt] - arr[0]) << "\n";


    }

    return 0;
}