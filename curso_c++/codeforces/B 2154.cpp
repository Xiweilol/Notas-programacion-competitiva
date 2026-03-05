#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        int mx_local = INT_MIN;

        for(int i = 1; i <= n; i++){
            mx_local = max(mx_local, a[i]);
            //actualizar el maximo de hasta ahorita para las posiciones pares
            if(i % 2 == 0){
                a[i] = mx_local;
            }
        }

        int ans = 0; 

        for(int i = 2; i + 1 <= n; i+=2){
            //checamos una posicion anterior si era mas grande que en el de posiciones pares
            if(a[i-1] >= a[i]){
                //hacemos la 
                int temp = abs(a[i-1] - a[i]) + 1;
                ans += temp;
                a[i-1] -= temp;
            }

            if(a[i+1] >= a[i]){
                int temp2 = abs(a[i+1] - a[i]) + 1;
                ans += temp2;
                a[i+1] -= temp2;
            }
        }

        if(n % 2 == 0){
            if(a[n-1] >= a[n]){
                ans += abs(a[n-1] - a[n]) +1;
            }
        }

        cout << ans << "\n";
    }
}