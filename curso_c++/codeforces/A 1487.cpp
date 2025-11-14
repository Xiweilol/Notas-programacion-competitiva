// Autor: Mintwi
// Fecha: 2025-11-14

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

        int minimo = 101;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            minimo = min(minimo,arr[i]);
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == minimo){
                cnt++;
            }
        }

        cout << n - cnt << "\n";
    }

    return 0;
}