// Autor: Mintwi
// Fecha: 2026-03-10
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    int mx = -1000;
    int temp = 0;
    while(t--){
        int a,b; cin >> a >> b;
        temp -= a;
        temp += b;

        mx = max(mx,temp);
    }

    cout << mx << "\n";


    return 0;
}