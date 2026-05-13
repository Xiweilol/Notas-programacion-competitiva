// Autor: Mintwi
// Fecha: 2026-05-11
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

        stack <pair<ll,ll>> pila;
        ll ans = 0;
        while(n--){
            
            ll a,b; cin >> a >> b;
            //si esta vacia
            ll maxmid = 0;
            while(!pila.empty()){
                 auto p = pila.top();

                 //si es igual los b's entonces le vamos a fusionar
                 if(b == p.second){
                    //fusionando con el b y la p.second
                    a += p.first - maxmid;
                    pila.pop();
                 //si es menor o igual
                 } else if(p.first <= a){
                    maxmid = max(maxmid,p.first);
                    pila.pop();
                 } else{
                    break;
                 }
            }

            ans = max(ans,a);

            pila.push(make_pair(a,b));
            cout << ans << " ";
        }

        cout << "\n";
    }

    return 0;
}