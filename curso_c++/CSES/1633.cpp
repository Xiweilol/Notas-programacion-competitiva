// Autor: Mintwi
// Fecha: 2026-02-19
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


const int maxn = 1000007;
ll a[maxn];
int n; 
ll dp(ll i){

    if(i == n) return 1;

    for(int j = 1; j <= n; j++){
        if(i + j < n){
            return dp(i+j);
        }
    }

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    cout << dp(0) << "\n";

    return 0;
}