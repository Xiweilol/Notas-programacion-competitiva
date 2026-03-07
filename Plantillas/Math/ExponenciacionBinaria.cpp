#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = 998244353;
const int MAXN = 1000000;

// exponenciación binaria
ll binpow(ll a, ll b){

    ll res = 1;
    a %= MOD;

    while(b){
        if(b & 1) res = res * a % MOD;

        a = a * a % MOD;
        b >>= 1;
    }

    return res;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

}