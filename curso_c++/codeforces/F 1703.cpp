// Autor: Mintwi
// Fecha: 2025-10-29

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <long long> arr(n+1);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        vector <long long> mark(n+1,0);

        //pasada de a[i] < i
        for(int i = 1; i <= n; i++){
            if(arr[i] < i){
                //hacemos una bandeja
                mark[i]++;
            }
        }

        vector <long long> pref(n+1);

        //aqui guardamos los i's validos, su posicion importa
        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + mark[i];
        }

        //ahora hacemos para lso aj < j

        long long ans = 0;
        for(int j = 1; j <= n; j++){
            if(arr[j] < j){
                //verifica el i < a[j]
                int pos = arr[j] -1;
                if(pos < 0) {
                    pos = 0;
                }
                ans += pref[pos];
            }
        }

        cout << ans << "\n";

    }

    return 0;
}