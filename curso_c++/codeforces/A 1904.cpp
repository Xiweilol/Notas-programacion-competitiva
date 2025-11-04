// Autor: Mintwi
// Fecha: 2025-11-02

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        ll a,b;
        cin >> a >>  b;

        ll xk,yk,xq,yq;
        cin >> xk >> yk >> xq >> yq;

        set<pair<ll,ll>> atkK,atkQ;

        int sx[4] = {-1,1,-1,1};
        int sy[4] = {-1,-1,1,1};

        for(int i = 0; i < 4; i++){
            //posibles posiciones que ataca al rey

            atkK.insert({xk+sx[i]*a, yk+sy[i]*b});
            atkK.insert({xk+sx[i]*b, yk+sy[i]*a});

            //a la reina
            atkQ.insert({xq + sx[i] * a, yq + sy[i] * b});
            atkQ.insert({xq + sx[i] * b, yq + sy[i] * a});
        }

        int ans = 0;

        for(auto p: atkK){
            if(atkQ.find(p) != atkQ.end()){
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}