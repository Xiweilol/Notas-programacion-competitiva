// Autor: Mintwi
// Fecha: 2025-11-10

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin >> x >> y >> z;

    if(x > y + z){
        cout << '+' << "\n";
    } else if(y > x + z){
        cout << '-' << "\n";
    } else if(x == y && z == 0){
        cout << 0 << "\n";
    } else {
        cout << '?' << "\n";
    }

    return 0;
}