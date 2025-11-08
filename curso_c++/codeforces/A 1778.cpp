// Autor: Mintwi
// Fecha: 2025-11-07

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

        bool need = false;
        int cnt = 0;
        int sum = 0;

        sum += arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i-1] == -1 && arr[i] == - 1){
                need = true;
            }
            sum += arr[i];
        }

        if(sum == n){
            sum -= 4;
        } else if(need){
            sum += 4;
        }

        cout << sum << "\n";
    }

    return 0;
}