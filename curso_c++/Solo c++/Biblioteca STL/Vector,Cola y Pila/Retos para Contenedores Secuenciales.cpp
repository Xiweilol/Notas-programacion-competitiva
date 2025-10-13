#include <iostream>
//#include <vector>
#include <algorithm>
//#include <deque>
#include <list>

using namespace std;

int main(){
    //RETO 1, VECTOR SIN USAR FOR PARA ENCONTRAR EL MAYO9R Y MENOR
        // int a;
        // cout << "cuantas numeros quieres ingresar? : ";
        // cin >> a;

        // vector <int> v(a);
        // cout << "Ingresa " << a << " numeros: ";
        // for (int i = 0; i < a; i++){
        //     cin >> v[i];
        // }

        // int mayor = *max_element(v.begin(), v.end());
        // int menor = *min_element(v.begin(), v.end());

        // cout << mayor << " " << menor;
        // return 0;

    // RETO 2, DEQUE
        // int a;
        // cout << "cuantas numeros quieres ingresar? : ";
        // cin >> a;

        // deque <int> d;
        // for (int i = 0; i < a ; i++){
        //     string decision;
        //     cout << "Deseas añadir el numero, al principio o al final del deque (p/f)" << endl;
        //     cin >> decision;

        //     int n;
        //     cout << "Ingrese el numero: " << endl;
        //     cin >> n;
        //     if (decision == "p"){
        //         d.push_front(n);
        //     } else{
        //         d.push_back(n);
        //     }
        // }
        // cout << "contando de izquierda a derecha" << endl ;
        // for ( deque <int> :: iterator it = d.begin(); it != d.end(); it++){
        //     cout << *it << " ";
        // }

        // cout << "contando de derecha a izquierda" << endl ;
        // for (deque <int> :: reverse_iterator it = d.rbegin(); it != d.rend(); it++){
        //     cout << *it << " ";
        // }
        // return 0;

    // RETO 3, list ordenada
    list <int> arr;

    int a;
    cout << "Ingrese 8 numeros please: "<< endl;
    for ( int i = 0; i < 8; i++){
        cin >> a;
        arr.push_back(a);
    }

    arr.sort();

    cout << "Lista ordenada: " << endl;
    for (int n : arr){
        cout << n << " ";
    }

    return 0;


}