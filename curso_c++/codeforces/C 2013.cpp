// Autor: Mintwi
// Fecha: 2026-04-18
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
bool ask(string t){
    cout << "? " << t << "\n";
    cout.flush();
    int ans; cin >> ans;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;

        string s = "";

        while(s.size() < n){
            if(ask(s + '0')){
                s += '0';
            } else if(ask(s + '1')){
                s += '1';
            } else {
                break;
            }
        }

        while(s.size() < n){
            if(ask('0'+s)){
                s = '0' + s;
            } else {
                s = '1' + s;
            }
        }

        cout << "! " << s << "\n";
        cout.flush();
    }

    return 0;
}