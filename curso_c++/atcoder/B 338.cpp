#include <iostream>
#include <map>

using namespace std;

int main(){
    string s; cin >> s;

    map <char,int> frecuencia; 
    for(char& c : s){
        frecuencia[c]++;
    }

    char ans = 'a';
    int mayor = 0;
    for(auto& p : frecuencia){
        if(p.second > mayor){
            mayor = p.second;
            ans = p.first;
        }
    }

    cout << ans;
    return 0;
}