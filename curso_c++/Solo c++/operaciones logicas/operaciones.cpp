#include <iostream>

using namespace std;

string esMayorQueCinco (int num){
    if (num > 5){
        return "Yes";
    }
    return "No";
}

int main(){

    string result = esMayorQueCinco(7);

    cout << "condicion es: " << result;

    return 0;
}