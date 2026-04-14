// Autor: Mintwi
// Fecha: 2026-04-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
const ll MOD2s = 5e8 + 4;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,q; cin >> n >> q;

    vector <ll> a(n+1);
    vector <ll> pref(n+1);
    
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pref[i] = (pref[i-1] + a[i]) % mod;
    }
    
    vector <ll> prefc(n+1);

    for(int i = 1; i <= n; i++){
        prefc[i] = (prefc[i-1] + (a[i] * a[i]) % mod)%mod;
    }

    // cout << "prefix normal: ";
    // for(int num : pref){
    //     cout << num << " ";
    // }
    // cout << "\n los cuadrados: ";

    // for(int num :prefc){
    //     cout << num << " ";
    // }
    // cout << "\n";
    while(q--){
        int l,r; cin >> l >> r;

        ll sum = (pref[r] - pref[l-1]) % mod;
        ll result = (((((sum * sum) % mod) - (prefc[r] -prefc[l-1])%mod) + mod) * MOD2s) % mod;
        cout << result << "\n";
    }


    return 0;
}