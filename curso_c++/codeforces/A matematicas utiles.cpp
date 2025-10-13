#include <iostream>
#include <set>

using namespace std;

int main(){
    multiset <char> con;

    string s; cin >> s;

    for(char c: s){
        if(c == '+'){
            continue;
        }
        con.insert(c);
    }

    for(auto it = con.begin(); it != con.end(); ++it){
        cout << *it;
        //prev devuele el ultimo elemento en un iterador
        if(it != prev(con.end())){
            cout << "+";
        }
    }


    
}

