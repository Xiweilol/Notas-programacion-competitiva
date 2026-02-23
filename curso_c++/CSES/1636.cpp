// Autor: Mintwi
// Fecha: 2026-02-23
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


const int maxn = 1000007;
const ll mod = 1e9 + 7;
// ll dp(ll i, ll used){

//     if(i == x) return 1;
//     if(used == n) return 0;
//     if(i > x) return 0;

//     if(vis[i][used]) return memo[i][used];

//     vis[i][used] = true;

//     memo[i][used] = dp(i + arr[used], used) + dp(i, used + 1);

//     if(memo[i][used] >= mod){
//         memo[i][used] -= mod;
//     }

//     return memo[i][used];
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x; cin >> n >> x;

    vector <int> arr(n);
    
    for(int i = 0; i < n; i++){
         cin >> arr[i];
    }

    vector <vector <int>> dp(n+1,vector <int>(x+1,0));

    //caso base
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1;
    }

    for(int idx = n-1; idx >= 0; idx--){
        for(int sum = 0; sum <= x; sum++){
            //no usar
            dp[idx][sum] = dp[idx+1][sum];
             // Usar moneda idx
            if (sum - arr[idx] >= 0) {
                dp[idx][sum] += dp[idx][sum - arr[idx]];
                if (dp[idx][sum] >= mod)
                    dp[idx][sum] -= mod;
            }
        }
    }

    cout << dp[0][x] << "\n";
    //sort(arr ,arr + n);
    //cout << dp(0,0) << "\n";

    return 0;
}