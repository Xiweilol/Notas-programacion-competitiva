// Autor: Mintwi
// Fecha: 2026-04-12
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    string s; cin >> s;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    set <char> f(s.begin(),s.end());

    if(f.size() >= 26){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }


    return 0;
}