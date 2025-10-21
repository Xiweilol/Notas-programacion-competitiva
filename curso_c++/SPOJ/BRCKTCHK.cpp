// Autor: Mintwi
// Fecha: 2025-10-21

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        string s; cin >> s;

        stack <char> pila;

        for(char& c : s){
            if(c == '(' || c == '{' || c == '[' || c == '<'){
                pila.push(c);
            }

            if((pila.top() == '(' && c == ')')||
               (pila.top() == '{' && c == '}')||
               (pila.top() == '[' && c == ']')||
               (pila.top() == '<' && c == '>')
                ){
                    pila.pop();
                }
        }

        if(pila.empty()){
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }

    return 0;
}