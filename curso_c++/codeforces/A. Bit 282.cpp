#include <iostream>
#include <string>

using namespace std;

int main(){
    int n; cin >> n;

    int result = 0;
    for(int i = 0; i < n; ++i){
        string cadena; cin >> cadena;

        if(cadena.find('+') != string::npos){
            result++;
        } else {
            result--;
        }
    }

    cout << result;
    return 0;
}