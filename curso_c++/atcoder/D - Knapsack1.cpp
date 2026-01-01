// Autor: Mintwi
// Fecha: 2026-01-01

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


// i ir contando las rondas
// j = el peso acumulando hasta ahorita,
ll getMaximun(int N,ll W, int i, int j, vector<ll> &w, vector <ll> &v){
    if(i > N){
        return 0;
    }

    if(j > W){
        return -1e18;
    }

    //hacemos recursivo apra ahcer decision de tomar y no tomar
    return max(v[i] + getMaximun(N,W,i+1,j + w[i],w,v), getMaximun(N,W,i+1,j,w,v));

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;

    ll W; cin >> W;

    vector <ll> w(N+1);
    vector <ll> v(N+1);
    for(int i = 1; i <= N; i++){
        cin >> w[i] >> v[i];
    }

    cout << getMaximun(N,W,1,0,w,v) << "\n";

    return 0;
}