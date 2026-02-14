// Autor: Mintwi
// Fecha: 2026-02-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
    set <char> vowels = {'A','E','I','O','U','Y','y','a','e','i','o','u'};
    
    string s; cin >> s;

    string newOne = "";
    for(int i = 0; i < s.size(); i++){
        if(vowels.count(s[i])) continue;
        //cout << newOne << "\n";
        newOne += '.';
        newOne += tolower(s[i]);
    }

    cout << newOne << "\n";
    //cout << "Hola";
    

    return 0;
}