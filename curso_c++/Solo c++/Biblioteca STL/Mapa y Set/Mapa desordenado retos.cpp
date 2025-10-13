#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main(){
    //Reto 1, contador de palabras
            // unordered_map <string,int> contadorPalabras;

            // string frase;
            // cout << "Escriba una frase: ";
            // getline(cin,frase);

            // int largo = frase.length();

            // string temp;
            // int contador;

            // for (char& c : frase){
            //     //si es la ultima letra de la cadena, lo agrega y rompe el bucle
            //     if(contador == largo-1){
            //         temp += c;
            //         contadorPalabras[temp]++;
            //         break;
            //     }

            //     //si tiene un espacio
            //     if (c == ' '){
            //         contadorPalabras[temp]++;
            //         contador++;
            //         //reinicia el temporal
            //         temp = "";
            //         continue;
            //     }
            //     //le va agregando a la cadena la caracteristica
            //     temp += c;
            //     contador++;
            // }

            // for(auto it = contadorPalabras.begin(); it != contadorPalabras.end(); ++it){
            //     cout << it->first << " -> " << it->second << endl;
            // }
    //RETO 2, FRECUENCIA DE LETRA
            // unordered_map <char,int> frecuenciaLetra;

            // string palabra; cin >> palabra;

            // for(char& c : palabra){
            //     frecuenciaLetra[c]++;
            // }

            // for(auto it = frecuenciaLetra.begin(); it != frecuenciaLetra.end();++it){
            //     cout << it->first << " -> " << it->second << endl;
            // }
            // return 0;
    //Reto 3, bases de datos con mapas desordenado
            // unordered_map <string,string> contactos;
            
            // cout << "Ingrese una de los siguientes nuemros: " << endl;
            // cout << "1. Insertar contacto" << endl;
            // cout << "2. Buscar contacto" << endl;
            // cout << "3. Eliminar contacto" << endl;
            // cout << "4. Mostrar todos los contacto" << endl;

            // bool puedeContinuar = true;

            // while(puedeContinuar){
            //     int opc;

            //     cout << "\nIngrese una de los siguientes nuemros: " << endl;
            //     cout << "1. Insertar contacto" << endl;
            //     cout << "2. Buscar contacto" << endl;
            //     cout << "3. Eliminar contacto" << endl;
            //     cout << "4. Mostrar todos los contacto" << endl;
            //     cout << "0. Salir" << endl;
            //     cin >> opc;

            //     switch (opc)
            //     {
            //     case 1:{
            //         string nombre,contacto;
            //         cout << "inserta el nombre y contacto seguidos por favor: ";
            //         cin >> nombre >> contacto;
            //         contactos.emplace(nombre,contacto);
            //         cout << "contacto agrego correctamente.";
            //         break;
            //     }

            //     case 2:{
            //         if(contactos.empty()){
            //             cout << "No hay contactos guardados";
            //             break;
            //         }
            //         string nombre;
            //         cout << "Ingrese el nombre del contacto: ";
            //         cin >> nombre;

            //         cout << "\n" << contactos[nombre];
            //         break;
            //     }

            //     case 3:{
            //         string nombre;
            //         cout << "Ingrese el nombre de contacto que deseas eliminar: ";
            //         cin >> nombre;
            //         if(contactos.count(nombre)){
            //             contactos.erase(nombre);
            //             break;
            //         } else{
            //             cout << "No existe contacto" << endl;
            //             break;
            //         }
                    
            //     }

            //     case 4:{
            //         for(auto& par : contactos){
            //             cout << par.first << " -> " << par.second << endl;
            //         }
            //         break;
            //     }
                
            //     case 0:{
            //         puedeContinuar = false;
            //         break;
            //     }
            //     default:
            //         break;
            //     }
            // }

            // return 0 ;

    //RETO 4, PRIMER NUMERO REPETIDO

            // unordered_map <int,int> checador;

            // int n; cin >> n;
            // vector <int> arr(n);
            // for (int i = 0; i < n; ++i){
            //     cin >> arr[i];
            // }

            // for(int i = 0; i < arr.size();++i){
            //     // suma un 1 a la llave, en este caso los elementos del array
            //     checador[arr[i]]++;
            //     //si una llave, su valor es 2, ese es el primer numero en repetir.
            //     if(checador.at(arr[i]) == 2){
            //         cout << "El primero numero que repite es: " << arr[i];
            //         break;
            //     }
            // }
}