// Autor: Mintwi
// Fecha: 2025-11-13

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <int> arr(n+1);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        int cnt = 0;

        for(int i = 1; i <= n; i++){
            if(arr[i] == i){
                cnt++;
            }
        }

        if(cnt & 1){
            cout << (cnt + 1) / 2 << "\n";
        } else {
            cout << cnt / 2 << "\n";
        }


    }

    return 0;
}