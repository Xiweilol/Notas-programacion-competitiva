// Autor: Mintwi
// Fecha: 2026-02-26
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
const ll maxn = 10000000 + 5;

ll memo[maxn];

// bool visi[maxn];
// int n; 
// ll dp(ll i){

//     if (i == n) return 1;

//     if(visi[i]) return memo[i];

//     visi[i] = true;
//     if(i < n){
        
//         memo[i] += (2*dp(i+2) + dp(i+3)) % mod;     
//     }

//     return memo[i];
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    memo[n] = 1; //caso base

    for(int i = n - 1; i >= 0; i--){
        memo[i] += (2 * memo[i+2] + memo[i+3]) % mod;
    }

    cout << memo[0] << "\n";

    return 0;
}