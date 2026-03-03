//Mintwi
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
const int maxn = 1e5 + 5;

const ll mod = 1e9 + 7;

int n,m;

int a[maxn];
int memo[maxn][102];

bool visito[maxn][102];

ll dp(int i, int k){
    //por si es una k invalida
    if(k < 1 || k > m) return 0; 
    //cuando llega final significa que es una respuesta
    if(i == n) return 1;
    if(visito[i][k]) return memo[i][k];
    visito[i][k] = true;
    //si el numero que paso ya no se cumple retorna 0
    
    //verificar si es 0
    if(a[i] != 0){
        if(abs(a[i] - k) <= 1){
            memo[i][k] = dp(i+1,a[i]) % mod;
        }
        //simplemente lo avanzamos y no sumamos nada
    } else{
        memo[i][k] += (dp(i+1,k) + dp(i+1,k+1) + dp(i+1,k-1)) % mod;
    }

    return memo[i][k]; 
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    cin >> m;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll ans = 0;
    // si el primer oes diferente de 0, solo pasamos 
    if(a[0] != 0){
        ans += dp(1,a[0]) % mod;
    } else {
        //inicia en 0
        for(int i = 1; i <= m; i++){
            ans += (dp(1,i)) % mod;
        }
    }

    cout << ans % mod << "\n";
}