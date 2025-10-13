#include <iostream>


using namespace std;

int main(){
    string s; cin >> s;
    
    int cont = 0;

    for(int i = 0; i < (int)s.size() - 1; ++i){
        if(s[i] == s[i+1]){
            cont++;
        } else {
            cont = 0;
        }

        if(cont == 6){
            cout << "YES";
            return 0;
        }

    }

    cout << "NO";
    return 0;
}