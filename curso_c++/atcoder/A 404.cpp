#include <iostream>

using namespace std;

int main(){
    string s; cin >> s;

    string abc = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < abc.length(); ++i){
        if(s.find(abc[i]) == string::npos){
            cout << abc[i];
            break;
        }
    }

    return 0;
}