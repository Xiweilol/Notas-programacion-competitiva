// Autor: Mintwi
// Fecha: 2026-02-13
// Number theory hater :(
//editorial 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;


        vector <ll> a(n+1);
        vector <ll> Odd;
        vector <ll> Even;

        for(int i = 1; i <= n; i++){
            cin >> a[i];

            if(a[i]&1){
                Odd.push_back(a[i]);
            } else{
                Even.push_back(a[i]);
            }
        }

        sort(Odd.rbegin(),Odd.rend());
        sort(Even.rbegin(),Even.rend());

        if(Odd.empty()){
            for(int i = 0; i < n; i++){
                cout << 0 << " ";
            }

            cout << "\n";
            continue;
        }
        
        vector <ll> pref(Even.size() + 1);
        
        for(int i = 0; i < Even.size(); i++){
            pref[i+1] = pref[i] + Even[i];
        }

        for(int i = 1; i <= n; i++){

            ll ans = 0;
            //minimo necesario cuando los pares no alcanzan
            int need = max(1,i - (int)Even.size());
            // si es par, le sumamos 1
            if(need % 2 == 0) need++;

            if(need > (int)Odd.size() || need > i){
                cout << 0 << " ";
                continue;
            }

            //tomamos los pares que nos sobran
            int takeEven = i - need;
            ans = Odd[0] + pref[takeEven];
            cout << ans << " ";
        }

        cout << "\n";
    }

    return 0;
}