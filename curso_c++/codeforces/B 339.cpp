// Autor: Mintwi
// Fecha: 2026-02-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;

    vector <int> a(m);

    for(int i = 0; i < m; i++) cin >> a[i];


    ll ans = 0;

    int act = 1;
    for(int i = 0; i < m; i++){
        if(act <= a[i]){
            ans += a[i] - act;
        } else {
            ans += n - act + a[i];
        }

        act = a[i];
    }

    cout << ans << "\n";
    return 0;
}