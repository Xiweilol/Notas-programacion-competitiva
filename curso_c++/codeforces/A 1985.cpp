// Autor: Mintwi
// Fecha: 2026-01-21

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string a,b; cin >> a >> b;

        char temp = a[0];

        a[0] = b[0];
        b[0] = temp;
        
        cout << a << " " << b << "\n";
    }

    return 0;
}