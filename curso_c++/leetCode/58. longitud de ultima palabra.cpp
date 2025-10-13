#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
        vector <string> arr;
        string s;
        getline(cin,s);
        string temp;
        //obtenemos el largo de la cadena
        int largo = s.size();
        for(int i = 0; i < largo ; ++i){
            // si es un caracter vacia, empuja la palabra temporal creado y reiniciar el valor del temporal
            if(s[i] == ' '){
                //si la temporal no tiene ningun valor, salta
                if(temp == ""){
                    continue;
                }
                arr.push_back(temp);
                temp = "";
                continue;
            }
            //si el contador ya es el ultimo, directamente me agrega la ultima palabra a la lista
            if(i == largo -1){
                temp += s[i];
                arr.push_back(temp);
                
                break;
            }
            temp += s[i];

        }

        // for(int i = 0; i < arr.size(); ++i){
        //     cout << arr[i];
        //  }

        cout << arr[arr.size() - 1].length();

        return 0;
}
