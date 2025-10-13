#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;

    char a = s[0];
    char b = s[2];

    if(b == '8'){
        s[0] += 1;
        s[2] = '1';
    } else {
        s[2] += 1;
    }

    cout << s << "\n";

    return 0;
}
