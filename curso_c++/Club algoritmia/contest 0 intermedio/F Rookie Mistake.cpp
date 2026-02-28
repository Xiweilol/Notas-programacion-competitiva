#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;

ll factorial(ll N,ll M){
    ll ans = 1;

    while(N > 0){
        ans %= mod;
        ans *= M;
        M--;
        N--;
    }

    return (ans % mod);
}
int main(){
    ll N; cin >> N;

    ll M; cin >> M;

    M %= mod;
    cout << factorial(N,M) % mod<< "\n";
}