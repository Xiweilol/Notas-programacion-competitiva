// Autor: Mintwi
// Fecha: 2026-01-01

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


// i ir contando las rondas
// j = el peso acumulando hasta ahorita,
ll getMaximun(int N,ll W, int i, int j, vector<ll> &w, vector <ll> &v, vector <vector<ll>> &memo){
    if(j > W){
        return -1e18;
    }
    if(i > N){
        return 0;
    }

    if(memo[i][j] != -1){
        return memo[i][j];
    }
    //hacemos recursivo apra ahcer decision de tomar y no tomar
    return memo[i][j] = max(v[i] + getMaximun(N,W,i+1,j + w[i],w,v,memo), getMaximun(N,W,i+1,j,w,v,memo));

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;

    ll W; cin >> W;

    vector <ll> w(N+1);
    vector <ll> v(N+1);
    vector <vector<ll>> memo(N+1, vector<ll>(W+1,-1));
    for(int i = 1; i <= N; i++){
        cin >> w[i] >> v[i];
    }

    cout << getMaximun(N,W,1,0,w,v,memo) << "\n";

    return 0;
}