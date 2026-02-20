// Autor: Mintwi
// Fecha: 2026-02-19
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool visito [1000007];
ll memo [1000007];
int x;
int n;
int arr [102];
ll dp(ll i){
    //caso base
    if(i == x) return 0;

    if(visito[i]){
        return memo[i];
    }
    
    visito[i] = true;
    //transicion
    ll ans = 1000000 + 7;

    //iterar lol no se
    for(int j = 0; j < n; j++){
        if(i + arr[j] > x){
            continue;
        }
        ans = min(ans,dp(i + arr[j]) + 1);

    }
    memo[i] = ans;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    cin >> x;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(dp(0) == 1000007){
        cout << -1 << "\n";
    } else{
        cout << dp(0) << "\n";
    }
    
    return 0;
}
