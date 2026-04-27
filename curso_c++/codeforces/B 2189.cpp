// Autor: Mintwi
// Fecha: 2026-04-26
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
        ll n,x; cin >> n >> x;

        ll mx_pasos = -100;
        
        ll as,bs,cs;

        ll grapas = 0;
        while(n--){
            ll a,b,c; cin >> a >> b >> c;
            grapas += a *(b-1);
            if((b*a-c) >= mx_pasos){
                as = a; bs = b; cs = c;
                mx_pasos = (b*a-c);
            }   
        }

        if(grapas >= x){
            cout << 0 << "\n";
            continue;
        } 

        if(mx_pasos <= 0){
            cout << -1 << "\n";
            continue;
        }

        ll rest = x - grapas;
        cout << (rest + mx_pasos-1) / mx_pasos << "\n";
    }

    return 0;
}