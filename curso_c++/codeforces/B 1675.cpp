// Autor: Mintwi
// Fecha: 2026-01-13

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> arr(n+1,0);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        bool ok = true;
        for(int i = n; i >= 2; i--){
            //si el actual es menor que el siguiente
            while(arr[i-1] >= arr[i] && arr[i-1] > 0){
                arr[i-1] /= 2;
                //cout << arr[i-1] << "\n";
                ans++;
            }

            if(arr[i-1] >= arr[i]){
                ok = false;
                break;
            }
        }
        
        if(ok){
            cout << ans << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}