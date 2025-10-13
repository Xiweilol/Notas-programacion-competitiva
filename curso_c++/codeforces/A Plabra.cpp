#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
    string s; cin >> s;

    int may,minu = 0;
    for(char& c : s){
        if(isupper(c)){
            may++;
        } else {
            minu++;
        }
    }

    if(may > minu){
        transform(s.begin(),s.end(),s.begin(),::toupper);

    } else if(may < minu){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    } else if( may == minu){
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }

    cout << s;

    return 0;

}