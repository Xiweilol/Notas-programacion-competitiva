// Autor: Mintwi
// Fecha: 2026-02-15
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector <ll> guar;

    for(int i = 0; i <= 30; i++){
        guar.push_back(1<<i);
    }


    int x; cin >> x;

    int val = 0;
    for(int i = 0; i < 30; i++){
        if(guar[i] <= x){
            val = guar[i];
        }
    }

    cout << (val == x ? 1 : x - val + 1) << "\n";

    return 0;
}