//Mintwi
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;
const int maxn = 1e5 + 5;

const ll mod = 1e9 + 7;

int n,m;

int a[maxn];
int memo[maxn][maxn];

bool visito[maxn][maxn];

int dp(int i, int k){
    //cuando llega final significa que 
    if(i == n) return 1;

    //si el numero que paso ya no se cumple retorna 0
    if(abs(a[i] - k) > 1) return 0;

    //posicion actual menos el lemento que recibo
    if(visito[i][k]) return memo[i][k];

    visito[i][k] = true;
    //verificar si es 0
    if(a[i] != 0){
        //simplemente lo avanzamos y no sumamos nada
        memo[i][k] = dp(i+1,k);
    } else{
        memo[i][k] += (dp(i+1,k) + dp(i+1,k+1) + dp(i+1,k-1)) % mod;
    }

    return (memo[i][k]) % mod; 
}
int main(){
    cin >> n;
    cin >> m;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    if(a[0] != 0){
        ans += dp(1,a[0]);
    } else {
        for(int i = 1; i <= m; i++){
            ans += dp(1,a[i]);
        }
    }

    cout << ans << "\n";
}