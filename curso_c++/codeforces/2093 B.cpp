#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        //mantenemos el costo sea >= 1, la cual garantizamos mayor cero posible a la izquierda y un numero diferente de cero
        string n; cin >> n;
        int contador = 0;
        bool removido = false;
        for(int i = (int)n.size() - 1; i >= 0; i--){
            //verificamos que es el primer numero digito distinto a 0
            if(n[i] != '0'){
                removido = true;
                //ahora si topamos con un numero distinto a cero lo removimos
            } else if(removido){
                contador++;
            }
        }

        cout << (int)n.size() - (contador + 1) << endl;
    }

    return 0;
}