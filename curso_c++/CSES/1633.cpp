#include <bits/stdc++.h>
using namespace std;

const int maxn = 1000002;
const int mod = 1e9 + 7;

bool vis[maxn];
int memo[maxn];
int n;

///i es la suma que llevamos
int dp(int i){
    ///caso base
    if(i == n) return 1;
    ///checar si esta visitado
    if(vis[i]) return memo[i];
    vis[i] = true;
    ///las tranciones
    for(int j = 1; j <= 6; ++j){
        if(i + j <= n){
            memo[i]+= dp(i + j);
            //if(memo[i] >= mod) memo[i]-= mod;
            memo[i]%= mod;
        }
    }
    return memo[i];///retornan la respuesta
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    cout << dp(0) << "\n";
    return 0;
}