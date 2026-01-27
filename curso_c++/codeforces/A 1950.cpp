// Autor: Mintwi
// Fecha: 2026-01-27

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        if(a < b && b < c){
            cout << "STAIR\n";
        } else if(b > a && b > c){
            cout << "PEAK\n";
        } else {
            cout << "NONE\n";
        }
    }

    return 0;
}