#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t; cin >> t ;

    while(t--){
        ll n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll ans = 0;
        
        for(int i = 0; i < n;i++){
            ll x1 = -1, x2 = -1;
            for(int j = i+1; j < n-1;j++){
                int l = j+1, r = n - 1;
                //para la condicion de a[i] + a[j] > X
                //si cumple para x entonces cumple para x-1,x-2,x-3....
                while(l <= r){
                    int mid = (l + r) / 2;

                    if(a[i] + a[j] > a[mid]){
                        x1 = mid;
                        l = mid + 1;
                    } else {
                        r = mid - 1;
                    }
                }

                l = j+1, r = n - 1;
                //segunda condicion
                while(l <= r){
                    
                    int mid = (l + r ) / 2;
                    //si cumple para x entonces se cumple para x+1,x+2,x+3....
                    if(a[i] + a[j] + a[mid] > a[n-1]){
                        x2 = mid;
                        r = mid - 1;
                    } else{
                        l = mid + 1;
                    }
                }
                //cout << "Indice i: " << i << "\n";
                //cout << "Indice j: " << j << "\n";
                //cout << "Valor de x1: " << x1 << "\n";
                //cout << "Valor de x2: " << x2 << "\n";

                if(x1 != -1 && x2 != -1){
                    ans += (min(x1,n-1) - max(x2,0ll) >= 0 ? min(x1,n-1) - max(x2,0ll) + 1 : 0);
                }

            }
        }

        cout << ans << "\n";
    }

}