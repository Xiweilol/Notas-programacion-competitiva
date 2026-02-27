// Autor: Mintwi
// Fecha: 2026-02-23
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


const int maxn = 1000007;
const ll mod = 1e9 + 7;
int memo[maxn][102];
bool vis[maxn][102];
int arr[102];
int n;
int x;
// int dp(int i, int used){

//    if(i == x) return 1;
//     if(used == n) return 0;
//     if(i > x) return 0;

//    if(vis[i][used]) return memo[i][used];

//     vis[i][used] = true;

//         //aqui toma la moneda que estamos usando ya o la moneda que sigue
//     memo[i][used] = dp(i + arr[used], used) + dp(i, used + 1);

//     if(memo[i][used] >= mod){
//         memo[i][used] -= mod;
//     }

//      return memo[i][used];
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> x;

    for(int i = 0; i < n; i++) cin >> arr[i];

    //caso base, vamos a suponer que en cada posicion de i, tenemos una respuesta supuestamente
    for(int i = n-1; i >= 0; i--){
        memo[x][i] = 1;
    }

    for(int used = n - 1; used >= 0; --used){
        for(int i = x - 1; i >= 0; --i){
            if(i + arr[used] <= x){
                memo[i][used & 1] += memo[i + arr[used]][used];
            }
            if(used + 1 < n){
                memo[i]
            }
        }
    }



    //cout << dp(0,0) << "\n";
    //sort(arr ,arr + n);
    //cout << dp(0,0) << "\n";

    return 0;
}