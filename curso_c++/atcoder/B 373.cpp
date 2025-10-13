#include <iostream>
#include <unordered_map>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string s; cin >> s;

    string abecedario = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int inicio = s.find('A');
    int total = 0;
    int anterior = 0;
    //iteramos el abecedario, iniciando desde 1 apra poder maniputlar
    for(int i = 1; i < abecedario.length(); ++i){
        //encontrar en que posicion esta la letra
        int temp = s.find(abecedario[i]);
        //este es para el caso 1, la exepcion
        if(inicio != 0){
            //hacemos la operacion y sumamos
            total += abs(inicio - temp);
            //desde aqui el actual convertio en anterior
            anterior = temp;
            inicio = 0;
            continue;
        }
        //hacemos la operacion, de anterior le restamos al actual, para sacar los pasos
        total += abs(anterior - temp);
        //el actual convertio en anterior;
        anterior = temp;
    }

    cout << total;

}