// Autor: Mintwi
// Fecha: 2025-11-28

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,q;cin >> n >> q;

        string s; cin >> s;

        bool pas = false;

        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                pas = true;
                break;
            }
        }

        while(q--){
            ll a; cin >> a;

            ll ans = 0;
            if(pas){
                int cont = 0;
                while(a > 0){
                    cont %= n;

                    if(s[cont] == 'A'){
                        a--;
                    } else {
                        a /= 2;
                    }
                    cont++;
                    ans++;
                }

                cout << ans << "\n";
            } else {
                cout << a << "\n";
            }

        }
    }

    return 0;
}