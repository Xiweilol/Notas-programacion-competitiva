#include <bits/stdc++.h>
 
 
using namespace std;
 
int main(){
    int t; cin >> t;
 
    while(t--){
        string a, b; cin >> a >> b;
        char lasta= a.back();
        char lastb = b.back();
        if(lasta < lastb){
            cout << '>' << '\n';
        } else if(lasta > lastb){
            cout << '<' << '\n';
        } else {
            if(a.size() == b.size()){
                cout << '=' << '\n';
            } else {
            if(lasta == 'L'){
                (a.size() > b.size()) ? cout << '>' << '\n' : cout << '<' << '\n';
            }
 
            if(lasta == 'S'){
                (a.size() > b.size()) ? cout << '<' << '\n' : cout << '>' << '\n';
            }
 
            }
 
 
        }
        }
 
        return 0;
 
    }