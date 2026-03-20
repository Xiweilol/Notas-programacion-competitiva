// Autor: Mintwi
// Fecha: 2026-03-19
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int n;
const int maxn = 2005;

bool visi[maxn][maxn];
ll memo[maxn][maxn];


ll dp(int l, int r, vector <int>& a){
    //caso base, si los dos
    if (l == r) return 0;

    if(visi[l][r]) return memo[l][r];

    visi[l][r] = true;

    return memo[l][r] = a[r] - a[l] + min(dp(l+1,r,a), dp(l,r-1,a));
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(),a.end());

    

    cout << dp(0,n-1,a) << "\n";

    return 0;
}