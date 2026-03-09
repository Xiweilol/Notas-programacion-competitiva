// Autor: Mintwi
// Fecha: 2026-03-09
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int y; cin >> y;

    string lol = to_string(y);

    while(true){
            y++;
            string lol = to_string(y);
            set <char> S(lol.begin(),lol.end());

            if(S.size() == 4){
                cout << y << "\n";
                break;
            }
    }
    

    return 0;
}