// Autor: Mintwi
// Fecha: 2025-10-21

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    unordered_map <int,int> mapa;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        mapa[a]++;
    }

    long long ans = 0;
    for(auto& par : mapa){
        if(par.first < par.second){
            ans += par.second - par.first;
        } else if(par.first > par.second){
            ans += par.second;
        }
    }

    cout << ans << "\n";
    return 0;
}
