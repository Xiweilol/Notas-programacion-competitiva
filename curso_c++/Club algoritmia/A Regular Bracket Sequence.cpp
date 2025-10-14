#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;

        int ta = (int)s.size();
        if(s[0] == ')' || s[ta-1] == '('){
            cout << "NO\n";
            continue;
        }

        stack <char> pila;

        for(char& c: s){
            if(c == '(' || c == '?'){
                pila.push(c);
            } else if(c == ')') {
                if((pila.top() == '(' || pila.top() == '?')){
                    pila.pop();
                }

            }
        }

        if(pila.empty()){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;
}