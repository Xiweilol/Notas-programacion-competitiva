// Autor: Mintwi
// Fecha: 2026-01-02

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


/*Observacion
depende cantidad de pares
cuando hay que hacer un paso mas que debe de ser?
cuando las sumas del impar mas grande mas todo los pares pequeños, no supera al par mas grande
*/
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector <ll> even;

        ll mx_odd = -1;

        for(int i = 0; i < n;i++){
            if(a[i] % 2 == 0){
                even.push_back(a[i]);
            } else{
                mx_odd = max(mx_odd,a[i]);
            }
        }

        if(even.empty() || mx_odd == -1){
            cout << 0 << "\n";
            continue;
        }

        sort(even.begin(),even.end());

        ll len = even.size();

        ll ans = len;
        for(ll i = 0; i < len; i++){
            if(mx_odd > even[i]){
                mx_odd += even[i];
            } else{
                //sumar 1 cuando sumas todo los pares no alcanza al siguiente par
                ans++;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}