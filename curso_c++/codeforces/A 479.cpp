// Autor: Mintwi
// Fecha: 2026-02-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;

    int mx = -1;

    mx = max(mx,a+b*c);
    mx = max(mx,a*(b+c));
    mx = max(mx,a*b*c);
    mx = max(mx,(a+b) * c);
    mx = max(mx,a+b+c);
    mx = max(mx,a*b+c);
    cout << mx << "\n";

    return 0;
}