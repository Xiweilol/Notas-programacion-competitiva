// Autor: Mintwi
// Fecha: 2026-05-19
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
        ll n,a,b; cin >> n >> a >> b;

        ll barato = 0;

        ll barato2 = 0;
        ll barato3 = 0;
        if(b <= a){
            barato = b;
        }else{
            barato = a;
        }

        if(2*a < b){
            barato2 = a;
        } else{
            barato2 = b;
        }

        bool ok = false;
        //si este pasa, entonces me conviene siempre tomar este
        if(3*a < b){
            ok = true;
            barato3 = a;
        } else {
            barato3 = b;
        }
        ll ans;

        if(n == 1){
            cout << min(a,b) << "\n";
            continue;
        }
        if(ok){
            cout << a*n << "\n";
            continue;
        } else{
            //cuantos 3 cabe en el n
            int temp = n / 3;
             ans = temp * barato3;
            //si sobra
            if(n % 3 != 0){
                if(n % 3 == 1){
                    ans += barato;
                } else{
                    if(barato2 != b){
                        ans += 2*barato2;
                    } else{
                        ans += barato2;
                    }
                    
                }
            }
        }

        cout << ans << "\n";

    }

    return 0;
}