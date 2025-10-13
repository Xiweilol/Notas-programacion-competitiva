#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string temp = s;

        sort(temp.begin(),temp.end());

        int cont = 0;

        for(int i = 0; i < n; ++i){
            if(temp[i] != s[i]){
                cont++;
            }
        }

        //entre 2 porque estamos considerando el cambio cada que hay diferencia, pero en este caso solo necesitamos mover 1 si hay cambio
        cout << cont / 2 << "\n";
    }
}