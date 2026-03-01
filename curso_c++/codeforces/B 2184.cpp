// Autor: Mintwi
// Fecha: 2026-02-28
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
        ll s,k,m;
        cin >> s >> k >> m;

        //cuando se va y no lo puede voltear
        if(k > m && k > s && s <= m){
            cout << 0 << "\n";
            continue;
        }

        if(s > k && m > k){
            int restante = m / k;
            int modu = m % k;
            int rrr = 0;
            if(restante & 1){
                rrr = k;
            } else {
                rrr = s;
            }
            cout << abs(rrr - modu) << "\n";
            continue;
        }  else if(s > k && m < k){
            cout << abs(s - m) << "\n";
            continue;
        }  else if(s > k && m == k){
            cout << s << "\n";
            continue;
        }

        if(s <= k && m > k){
            int modu = m % k;

            cout << abs(modu - s) << "\n";
            continue;
        } else if(m < k){
            cout << abs(s-m) << "\n";
            continue;
        }



        
    }

    return 0;
}