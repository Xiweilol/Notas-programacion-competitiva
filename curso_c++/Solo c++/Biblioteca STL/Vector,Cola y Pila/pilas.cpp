#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    // pila es ultimo en entrar, primero en salir
    //RETO 1, INVERTIR PALABRAS
        // stack <char> pila;

        // string p;
        // cout << "Entrada: ";
        // cin >> p;

        // for(int i = 0; i < p.size() ; ++i){
        //     pila.push(p[i]);
        // }

        // string s;
        // while (!pila.empty()){
        //     s += pila.top();

        //     pila.pop();
        // }

        // cout << "Salida: " << s;
    //RETO 2, VERIFICAR parentesis balanceados

        // stack<char> pila;
        // string s;
        // cin >> s;
        // bool balanceada = true;

        // for (int i = 0; i < s.size(); ++i) {
        //     if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
        //         pila.push(s[i]);
        //     } else {
        //         if (pila.empty()) { // No hay con qué emparejar
        //             balanceada = false;
        //             break;
        //         }
        //         char top = pila.top();
        //         if ((top == '(' && s[i] == ')') ||
        //             (top == '[' && s[i] == ']') ||
        //             (top == '{' && s[i] == '}')) {
        //             pila.pop();
        //         } else {
        //             balanceada = false;
        //             break;
        //         }
        //     }
        // }

        // if (!pila.empty()) balanceada = false;

        // if (balanceada) {
        //     cout << "Salida balanceada: Balanceada\n";
        // } else {
        //     cout << "Salida balanceada: No Balanceada\n";
        // }

        // return 0;
    

            // //Insertar un elemento
            // pila.push(10);
            // pila.push(20);
            // pila.push(30);

            // cout << "Tamaño de la pila: " << pila.size() << endl;
            // cout << "Elemnto en el tope: " << pila.top() << endl;

            // //Quitar ultimos elementos
            // pila.pop();
            // cout << "Después de un pop, tope: " << pila.top() << endl;


            // //vaciar la pila
            // while(!pila.empty()){
            //     cout << "Sacando: " << pila.top() << endl;
            //     pila.pop();
            // }

            // return 0;

        
    
}