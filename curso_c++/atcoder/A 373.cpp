#include <iostream>
#include <string>

using namespace std;

int main(){
    int contador = 0;
    for(int i = 1; i <= 12; ++i){
        string palabra; cin >> palabra;

        if (palabra.length() == i){
            contador++;
        }

    }
    cout << contador;
}