// Autor: Mintwi
// Fecha: 2026-06-02
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int a,b,c; cin >> a >> b >> c;

        
        if(a + b >= 10 || a + c >= 10 || b + c >= 10){
            cout << "YES";
        } else{
            cout << "NO";
        }

        cout << "\n";
    }

    return 0;
}