// Autor: Mintwi
// Fecha: 2026-02-23
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


const int maxn = 1000007;
const ll mod = 1000000000+7;
int n;

bool vis[maxn];
ll memo[maxn];
int arr[102];
ll x;

ll dp(ll i){

    //caso base
    if(i == x) return 1;

    //marcar visitados
    if(vis[i]) return memo[i];

    vis[i] = true;

    //iteracion del arreglo
    for(int j = 0; j < n; j++){
        if(arr[j] + i > x){
            continue;
        }

        memo[i] += dp(arr[j] + i);
      
        memo[i] %= mod;
         
    }

    return memo[i];

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   

    cin >> n;
    cin >> x;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << dp(0) << "\n";
    return 0;
}