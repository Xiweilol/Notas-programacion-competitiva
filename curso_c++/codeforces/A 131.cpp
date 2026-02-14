// Autor: Mintwi
// Fecha: 2026-02-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool mayus(string s){
    return all_of(s.begin(),s.end(),[](char c){
        return isupper(c);
    });
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    bool needChange = true;;
    
    if(islower(s[0])){
        for(int i = 1; i < (int)s.size(); i++){
            if(isupper(s[i])) continue;
            else{
                needChange = false;
                break;
            }
        }        
    } else{
        needChange = false;
    }
    

    if(needChange){
        s[0] = toupper(s[0]);
        for(int i = 1; i < (int)s.size();i++){
            s[i] = tolower(s[i]);
        }
    } else if(mayus(s)){
        for(int i = 0; i < (int)s.size();i++){
            s[i] = tolower(s[i]);
        }
    }

    cout << s << "\n";
    

    return 0;
}