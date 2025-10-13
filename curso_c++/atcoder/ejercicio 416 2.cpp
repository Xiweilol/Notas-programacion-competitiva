#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    string t = s;

    bool puedePoner = true;
    for (int i = 0; i < s.length(); ++i){
        //verificamos si hay un #
        if (s[i] == '#'){
            puedePoner = true;
            continue;
        } 
        if (s[i] == '.'){
            //versificamos si puede poner un o
            if(puedePoner){
                t[i] = 'o';
                puedePoner = false;
            }
        }
    }

    cout << t;

    return 0;

}