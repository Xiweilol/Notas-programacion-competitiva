// Autor: Mintwi
// Fecha: 2026-05-30
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

        vector <ll> a(n+1);

        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        vector <ll> pref(n+1);

        for(int i = 1; i <= n; i++){
            pref[i] = pref[i-1] + a[i];
        }
        ll minimo = LLONG_MAX;
        for(int i = 1; i <= n; i++){
            //tenemos que ir registrando el minimo global, porque una vez que aparece, ya no puede haber uno mas grande despues
            minimo = min(minimo,pref[i]/i);
            cout << minimo << " ";
        }

        cout << "\n";
    }

    return 0;
}