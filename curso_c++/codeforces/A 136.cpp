// Autor: Mintwi
// Fecha: 2026-04-09
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector <int> a(n+1);
    for(int i = 1; i <= n; i++){
        int ai; cin >> ai;
        a[ai] = i;
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    return 0;
}