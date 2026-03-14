#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

const int maxn = 2e5 + 5;

ll dp(ll i,int n, vector <ll> &memo,vector <bool> &visi, vector <ll> &a){
    if(i > n) return 0;

    if(visi[i]) return memo[i];

    visi[i] = true;

    //simpelmente es tomar el elemento del indice actual o seguimos avanzando

    //no son dos transiciones pero si son dos//
    memo[i] += a[i] + dp(i + a[i],n,memo,visi,a);

    //acum2 += dp(i+1,n,memo,visi,a);

    return memo[i];
}

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector <ll> a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];

        vector <ll> memo(n+3,0);
        vector <bool> visi(n+3,false);

        ll mx = LLONG_MIN;
        for(int i = 1; i <= n; i++){
            mx = max(mx,dp(i,n,memo,visi,a));
        }

        cout << mx << "\n";
        

    }
}