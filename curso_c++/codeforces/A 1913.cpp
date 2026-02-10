// Autor: Mintwi
// Fecha: 2026-02-09

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        string a = "";

        a += s[0];

        int i = 1;
        int len = s.size();
        while(i < len && s[i] == '0'){
            a += s[i];
            //cout << "Aqui entro: "<<a << "\n";
            i++;
        }

        
        if(i >= (len+1/2)){
            cout << -1 << "\n";
            continue;
        }
        s = s.substr(i,len);

        int ans1 = stoi(a);
        int ans2 = stoi(s);
        //cout << s << "\n";
        if(ans2 > ans1){
            cout << a << " " << s << "\n";
            
        } else{
            cout << -1 << "\n";
        }


    }

    return 0;
}