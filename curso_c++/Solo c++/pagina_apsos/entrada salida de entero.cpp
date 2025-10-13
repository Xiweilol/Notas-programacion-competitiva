#include <iostream>
using namespace std;

int main(){
    int num;
    char a;

    cout << "escribe primero numero y despues un char: ";
    //aqui son para recibir la entrada de lo que teclea el usuario
    cin >> num >> a;

    cout << "el character es: " << a << endl;
    cout << "el numero es " << num;

    return 0;
}