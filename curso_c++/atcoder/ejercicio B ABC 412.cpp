#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(){
    string s; cin >> s;
    string t; cin >>t;

    int largo = s.length();
    int contieneTodo = true;

    for(int i = 1; i <= largo; ++i){
        if(isupper(s[i])){
            char temp = s[i-1];
            if(t.find(temp) != string::npos){
                continue;
            } else {
                contieneTodo = false;
                break;
            }
            
        }
    }

    if(contieneTodo){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}