// Autor: Mintwi
// Fecha: 2026-02-06

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
        
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        vector <ll> pref(n+1);

        for(int i = 1; i <= n; i++){
            if(i&1){
                pref[i] = pref[i-1] + a[i];
            } else{
                pref[i] = pref[i-1] - a[i];
            }
        }

        set <ll> freq;

        bool ok = false;
        for(int i = 0; i <= n; i++){
            if(freq.count(pref[i])){
                ok = true;
                break;
            }
            freq.insert(pref[i]);
        }

        if(ok){
            cout << "YES\n";
        } else{
            cout << "NO\n";
        }


    }

    return 0;
}