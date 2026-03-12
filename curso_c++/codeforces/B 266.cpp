// Autor: Mintwi
// Fecha: 2026-03-12
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,t; cin >> n >> t;

    string s; cin >> s;

    while(t--){
        for(int i = 0; i < n-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }

    cout << s << "\n";

    return 0;
}