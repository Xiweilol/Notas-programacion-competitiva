// Autor: Mintwi
// Fecha: 2026-02-17
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;

    vector <ll> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int median = n / 2;

    ll l = 1, r = 2 * 1e9;

    int ans = 0;
    while(l <= r){
        ll mid = (r + l) / 2;
       //cout << "Valor mid: " << mid << "\n";
        ll need = 0;
        for(int i = median; i < n; i++){
            need += (a[i] >= mid ? 0 : mid - a[i]);
        }
        if(need <= k){
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
        //cout << "limite inferior: " << l << " limite superior: " << r << "\n";
    }

    cout << ans << "\n";

    return 0;
}