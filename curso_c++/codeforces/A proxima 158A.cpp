#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k ; cin >> n >> k;

    int contador = 0;
    
    vector <int> contenedor(n);
    for(int i = 0; i < n ; ++i){
        cin >> contenedor[i];
    }
    int numero = contenedor[k-1];
    for(int& num: contenedor){
        if(num >= numero && num > 0){
            contador++;
        }
    }

    cout << contador;

    return 0;
}