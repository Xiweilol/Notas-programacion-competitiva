// Autor: Mintwi
// Fecha: 2026-05-13
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> a(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll sum = 0;

        ll ans = 0;
        for(int i = n-1; i >= 0; i--){
            // si es positivo
            if(a[i] > 0){
                //cout << ans << "\n";
                sum += a[i];
                ans++;
            } else if(a[i] == 0 && sum > 0){
               // cout << "Aqui entro2\n";
                ans++;
            } else{

                if(sum > abs(a[i]) && sum > 0){
                    ans++;
                    sum += a[i];
                    if(sum < 0){
                        sum = 0;
                    }
                } else {
                    sum = 0;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}