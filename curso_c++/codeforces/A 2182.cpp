// Autor: Mintwi
// Fecha: 2026-05-27
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
        int n; cin >> n;

        string s; cin >> s;

        size_t existefirst = s.find("2025");
        size_t existesecond = s.find("2026");

        if(existefirst == std::string::npos || existesecond != std::string::npos){
            cout << 0 << "\n";
        } else{
            cout << 1 << "\n";
        }
    }

    return 0;
}