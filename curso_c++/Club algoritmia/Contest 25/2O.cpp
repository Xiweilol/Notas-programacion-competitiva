// Autor: Mintwi
// Fecha: 2025-11-25

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,b; cin >> n >> a >> b;

    a--;
    b--;

    string s; cin >> s;

    if(s[a] == s[b]){
        cout << 0 << "\n"; 
    } else {
        cout << 1 << "\n";
    }

    return 0;
}