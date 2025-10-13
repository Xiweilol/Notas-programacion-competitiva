#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> numeros = {3,6,8,1,5};

    // for (int numero : numeros){
    //     cout << numero << " ";
    // }
    
    //hacer un ordenamiento ascendente usando sort
    sort(numeros.begin(),numeros.end());

    //iterador para recorrer todos estas cosas;
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); it++){
        cout << *it << " ";
    }

    return 0;
}