#include <iostream>
#include <string>

using namespace std;
int main(){

    string frase;
    string palabra;
    cout << "escriba una frase: ";

    getline(cin,frase);

    cout << "escriba la palabra que quieres buscar: ";

    cin >> palabra;

    size_t palabraEncontrado = frase.rfind(palabra);

    if (frase.rfind(palabra) != string::npos){
        cout << "la palabra esta en la posicion: " << palabraEncontrado;
    } else {
        cout << "nadota";
    }
}