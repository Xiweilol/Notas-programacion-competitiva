//Mintwi

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int n; cin >> n;

    ll x; cin >> x;

    vector <int> a(n+1);

    for(int i = 1; i <= n; i++) cin >> a[i];

    vector <ll> pref(n+1);

    map <int,int> freq;
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + a[i];
        freq[pref[i]]++;
    }
    // for(int n : pref){
    //     cout << n << "\n";
    // }
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        int temp = 0;
        if(x < pref[i]){
            temp = x - pref[i];
        } else {
            temp = max(x,pref[i]) - min(x,pref[i]);
        }
        if(temp == 0){
            ans += freq[x];
        } else {
            ans += freq[temp];
        }
        //cout << temp << "\n";
        
    }

    cout << ans << "\n";


}
