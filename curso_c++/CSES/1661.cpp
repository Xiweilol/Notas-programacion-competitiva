//Mintwi

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n; cin >> n;

    ll x; cin >> x;

    vector <ll> a(n+1);

    for(int i = 1; i <= n; i++) cin >> a[i];

    vector <ll> pref(n+1);

    map <ll,ll> freq;
    
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + a[i];
    }

    freq[0]++;

    // for(int n : pref){
    //     cout << n << "\n";
    // }
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ll temp = pref[i] - x;
        //cout << temp << "\n";
        //sumando las frecuencias del temp jeje
        ans += freq[temp];
        //aumentar frecuencia
        freq[pref[i]]++;
        //cout << temp << "\n";
        
    }

    cout << ans << "\n";


}
