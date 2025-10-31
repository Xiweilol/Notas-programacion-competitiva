// Autor: Mintwi
// Fecha: 2025-10-31

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;

        vector <long long> arr(n+1);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        vector <long long> pref(n+1);

        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + arr[i];
        }

        int ans = 0;
        int i = 1;
        //sigue adentro del rango
        while(i+k-1 <= n){
            int ones = pref[i+k-1] - pref[i-1];

            if(ones == 0){
                ans++;
                i = i+k+1;
            } else {
                i++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}