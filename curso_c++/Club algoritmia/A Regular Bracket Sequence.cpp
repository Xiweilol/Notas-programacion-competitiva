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
        int cnt = 0;
        for(char& c: s){
            if(c == '(' || c == '?'){
                pila.push(c);
            }

            if(c == ')'){
                if(pila.top() == '(' || pila.top() == '?'){
                    pila.pop();
                }
                else {
                    break;
                }
            }
        }

        if(pila.empty() || pila.size() % 2 == 0){
            cout << "YES\n";
        } else {
            cout << "No\n";
        }

    }

    return 0;
}