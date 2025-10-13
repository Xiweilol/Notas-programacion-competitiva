#include <iostream>
#include <unordered_set>

using namespace std;

int main(){

    string s; cin >> s;

    unordered_set <char> contenedor;

    for(char& c : s){
        contenedor.insert(c);
    }

    if(contenedor.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}


