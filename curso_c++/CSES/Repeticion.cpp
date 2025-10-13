#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    map <char,int> repi;

    repi.emplace('A',0);
    repi.emplace('C',0);
    repi.emplace('G',0);
    repi.emplace('T',0);

    int mayor = 0;
    string cadena;
    cin >> cadena;

    //iniciamos desde 1 a todas las cadenas, tiene consecutivo o no
    int actual = 1;
    //inicializamos en 1 para que cuando sea al principio de la cadena, no saque error
    for (int i = 1; i < cadena.size();++i){
        //comparamos la segunda caracter con la primera caracter, si son iguales o no
        if (cadena[i] == cadena[i-1]){
            //si son iguales, va sumando 1;
            actual ++;
        } else{
            //pasa aqui cuando la caracter actual ya no es igual que el anterior, actualiza el valor de la que tenemos en la map
            if (actual >repi[cadena[i-1]]){
                //actualizamos el valor anterior al actual, para el siguiente numero automaticamente le inicializamos en 1 para evitar que se salte
                repi[cadena[i-1]] = actual;
            }
            //una vez que no sea igual el anterior y el actual, reinicia el contador
            actual = 1;
        }
    }
    //por si el ultimo caracter, el numero actual es mayor que el que tenemos en la map, se atualiza
    if (actual > repi[cadena.back()]){
        repi[cadena.back()] = actual;
    }


    for(auto it = repi.begin(); it != repi.end(); ++it){
        //cout << it->first << " -> " << it->second << endl;
        if(it->second > mayor){
            mayor = it->second;
        }
    }

    cout << mayor;

}