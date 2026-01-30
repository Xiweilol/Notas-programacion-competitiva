// Autor: Mintwi
// Fecha: 2026-01-30

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        int cntA = count(s.begin(),s.end(),'A');

        if(cntA >= 3){
            cout << 'A' << "\n"; 
        } else{
            cout << 'B' << "\n"; 
        }

    }

    return 0;
}