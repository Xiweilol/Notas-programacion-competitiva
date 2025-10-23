// Autor: Mintwi
// Fecha: 2025-10-22

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        long long max1 = 0;
        long long mini2 = 2e9;

        vector <long long> arr;
        for(int i = 0; i < n; i++){
            long long x,y; cin >> x >> y;
            if(x == 1){
                max1 = max(max1,y);
            } else if(x == 2){
                mini2 = min(mini2,y);
            } else {
                arr.push_back(y);
            }
            
        }

        long long ans = 0; 

        if(max1 > mini2){
            cout << ans << "\n";
            continue;
        }

        max1 -= 1;
        ans = mini2 - max1;

        max1 += 1;
        int cnt = 0;

        for(int i = 0; i < (int)arr.size();i++){
            if(arr[i] >= max1 && arr[i] <= mini2){
                cnt++;
            }
        }

        cout << ans - cnt << "\n";

    }

    return 0;
}