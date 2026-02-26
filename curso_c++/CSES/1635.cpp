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

// ll dp(ll i){

//     //caso base
//     if(i == x) return 1;

//     //marcar visitados
//     if(vis[i]) return memo[i];

//     vis[i] = true;

//     //iteracion del arreglo
//     for(int j = 0; j < n; j++){
//         if(arr[j] + i > x){
//             continue;
//         }

//         memo[i] += dp(arr[j] + i);
      
//         memo[i] %= mod;
         
//     }

//     return memo[i];

// }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   

    cin >> n;
    cin >> x;

    //caso base
    memo[x] = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //Dp es una mamada
    //iterar cada 
    //primer for es para construir los elmentos desde x hasta 0 del memo
    //tambien indica que es una suma que estamos acarreando
    for(int i = x - 1; i >= 0; i--){
        memo[i] = memo[i+1];
        //iterar el arreglo
        for(int j = 0; j < n; j++){
            
            if(i + arr[j] > x) continue;
            // es la suma acumulada que llevamos mas la moneda
            memo[i]++;
            if(memo[i] >= mod){
                memo[i] -= mod;
            }
        }
    }

    cout << memo[0] << "\n";
   // cout << dp(0) << "\n";
    return 0;
}