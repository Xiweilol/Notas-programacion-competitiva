// Autor: Mintwi
// Fecha: 2026-03-18
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,q; cin >> n >> q;

    string s; cin >> s;

    s = 'a' + s;
    //cout << s << "\n";
    vector <int> al(n+1);

    for(int i = 1; i <= n; i++){
        al[i] = s[i] - 'a' + 1;
    }

    vector <int> pref(n+1);

    for(int i = 1; i <= n; i++){
        pref[i] = pref[i-1] + al[i];
    }

    while(q--){
        int l,r; cin >> l >> r;

        cout << pref[r] - pref[l-1] << "\n";
    }

    return 0;
}