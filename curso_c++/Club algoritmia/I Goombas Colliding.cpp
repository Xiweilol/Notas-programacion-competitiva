// Autor: Mintwi
// Fecha: 2026-02-05

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll L, G; cin >> L >> G;

    
    ll dist = 0; ll direc = 0;
    while(G--){
        ll pi,di; cin >> pi >> di;

        if(di == 0){
            dist = max(dist,pi);
        } else{
            dist = max(dist,L - pi);
        }
    }

    cout << dist << "\n";

    return 0;
}