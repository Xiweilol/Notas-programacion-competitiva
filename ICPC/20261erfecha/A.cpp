// Autor: Mintwi
// Fecha: 2026-04-23
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;

    int sum = 0;
    int jaja = 0;
    int porciento = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        int pi; cin >> pi;
        sum += pi;
    } 

    for(int i = 0; i < m; i++){
        int ai; cin >> ai;
        jaja += ai;
    }

    porciento = (sum + 9) / 10;

    ans = jaja - sum;

    if(ans >= porciento){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }

    return 0;
}