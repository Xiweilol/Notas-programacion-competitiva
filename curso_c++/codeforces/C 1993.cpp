// Autor: Mintwi
// Fecha: 2026-01-20

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b,l; cin >> a >> b >> l;

        set <int> ans;

        ll power_a = 1;

        //iterar potencias de a
        for(int x = 0; ;x++){
            if(l % power_a == 0){
                ll power_b = 1;

                for(int y = 0; ; y++){
                    ll curr_divisor = power_a * power_b;

                    if(l % curr_divisor == 0){
                        ans.insert(l / curr_divisor);
                    } else {
                        break;
                    }

                    //verificamos si se puede seguir creciendo la potencia del b
                    if(l / power_b < b)break;
                    power_b *= b;
                }
            }

            if(l / power_a < a) break;
            power_a *= a;
        }

        cout << ans.size() << "\n";
    }

    return 0;
}