// Autor: Mintwi
// Fecha: 2026-04-10
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s1,s2,s3,s4; cin >> s1 >> s2 >> s3 >> s4;

    set <int> s = {s1,s2,s3,s4};

    cout << 4 - s.size() << "\n";

    
    return 0;
}