// Autor: Mintwi
// Fecha: 2026-02-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    string ref = "hello";

    int cont = 0;

    for(int i = 0; i < (int)s.size(); i++){
        if(cont < 5){
            if(s[i] == ref[cont]) cont++;
        } else{
            break;
        }
    }

    cout << (cont == 5 ? "YES" : "NO") << "\n";


    return 0;
}