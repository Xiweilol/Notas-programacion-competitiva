#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <long long> arr(n);

        for(int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(),arr.end());

        vector <long long> pref(n);
        
        pref[0] = arr[0];
        
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + arr[i];
        }
        //la suma es desde la ultima posicion
        long long sumaR = arr[n-1];
        int r = 1;
        bool ok = false;
        //empezamos a recorrerla desde inicio al final
        for(int b = 1; b < n && !ok; b++){
            long long sumaB = pref[b-1];
        
            //la suma es desde la ultima posicion
            
            while(r < b && sumaR <= sumaB){
                //tomar elementos desde final del arreglo
                sumaR += arr[n-1-r];
                r++;
            }

            if(sumaR > sumaB && r < b){
                ok = true;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}