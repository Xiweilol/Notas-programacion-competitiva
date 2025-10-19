// Autor: Mintwi
// Fecha: 2025-10-19

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        string s; cin >> s;

        vector <int> arr;

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                arr.push_back(i);
            }
        }

        int ta =(int) arr.size();
        for(int i = 0; i < ta; i++ ){
            //cuando sea la primer 1 enconrado o
            //cuando la distancia entre los 1 es mayor o igual a k, condicion para protegerla
            if(i == 0 || arr[i] - arr[i-1] >= k){
                ans++;
            }
        }

        cout << ans << "\n";
       
     
    }

    return 0;
}