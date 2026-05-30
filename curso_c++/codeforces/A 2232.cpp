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

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        ll ans = LLONG_MAX;

        //fijamos un punto de reunion
        for(int i = 0; i < n; i++){
            ll l = 0;
            ll r = 0;

            for(int j = 0; j < n; j++){
                if(a[i] == a[j]) continue;
                if(a[j] < a[i]){
                    l++;
                } else if(a[j] > a[i]){
                    r++;
                } 
            }

            ans = min(ans,max(l,r));
        }


        cout << ans << "\n";
    }


    return 0;
}