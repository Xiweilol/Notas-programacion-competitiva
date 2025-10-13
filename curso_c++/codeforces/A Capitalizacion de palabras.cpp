#include <iostream>
#include <cctype>

using namespace std;

string sconverFirstToUpper(string s){
    s[0] = toupper(s[0]);

    return s;
}

int main(){
    string s; cin >> s;

    string ns = sconverFirstToUpper(s);

    cout << ns;

    return 0;
}