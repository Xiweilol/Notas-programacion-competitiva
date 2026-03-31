// Autor: Mintwi
// Fecha: 2026-03-31
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n,t; cin >> n >> t;

    if(n == 1 && t == 10){
        cout << -1;
        return 0;
    }
    if(t == 10){
        for(int i = 1; i <= n-1;i++){
            cout << 1;
        }
        cout << 0;
        return 0;
    }

    for(int i = 0; i < n; i++){
        cout << t;
    }

    return 0;
}