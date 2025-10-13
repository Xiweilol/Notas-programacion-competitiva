#include <iostream>

using namespace std;

int main(){
    string s; cin >> s;

    if(s[0] == 'R' || (s[1] == 'R' && s[0] != 'M')){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}