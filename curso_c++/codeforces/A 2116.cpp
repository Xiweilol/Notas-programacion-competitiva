// Autor: Mintwi
// Fecha: 2026-03-06
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
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(min(a,c) >= min(b,d)){
            cout << "Gellyfish\n";
        } else{
            cout << "Flower\n";
        }
        
    }

    return 0;
}