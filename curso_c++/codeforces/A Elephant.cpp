#include <iostream>

using namespace std;

int main(){
    int x; cin >> x;

    //aqui la condicion es que el elefante puede dar paso de 1 a 5 cuadras
    //la idea es dar mas pasos de 5 posible hasta el numero por eso esta el dividir entre 5
    //x % 5 != 0, cuando no es divisible entre 5 significa que sobro un numero, la cual siempre devuelve un valor 1.
    cout << (x / 5 + (x % 5 != 0));
    
    return 0;




}