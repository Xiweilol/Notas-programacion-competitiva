// Autor: Mintwi
// Fecha: 2026-03-31
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt; cin >> tt;
    while(tt--){
        int n,m; cin >> n >> m;

        string s,t; cin >> s >> t;

        char temp = s[0];
        bool chill = true;
        //checar si s ya ta chido
        for(int i = 1; i < n; i++){
            if(s[i] == temp){
                chill = false;
                break;
            }
            temp = s[i];
        }

        if(chill){
            cout << "YES\n";
        } else{
            //sino, primero checamos la t si esta chido y checar
            char temps = t[0];
            bool lol = true;
            for(int i = 1; i < m; i++){
                if(t[i] == temps){
                    lol = false;
                    break;
                }
                temps = t[i];
            }

            if(!lol){
                cout << "NO\n";
            } else{
                //su inicio y el final debe ser diferente al continuidad que queremos romper
                char start = t[0];
                char end = t[m-1];

                char jaja = s[0];

                bool ok = true;
                //checamos cuales son la continuidad
                for(int i = 1; i < n; i++){
                    if(jaja == s[i] && (jaja == start || jaja == end)){
                        ok = false;
                        break;
                    }
                    jaja = s[i];
                }

                cout << (ok ? "YES" : "NO") << "\n";
            }


        }
    }

    return 0;
}