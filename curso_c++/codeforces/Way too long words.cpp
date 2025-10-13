#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n; cin >> n;

    vector <string> arr(n);
    for(int i = 0; i < n ; i++){cin >> arr[i];}

    
    for(int i = 0; i < arr.size();++i){
        int largoPalabra = arr[i].length();
        // salta esta palabra si tiene menor o 10 letras
        if (largoPalabra <=10){
            continue;
        }

        //si es mas grande, cambia la posicion del arreglo añadiendo la primera  letra, numero de cadenas - 2 y agregando la ultima palabra.
        arr[i] = arr[i].front() + to_string(largoPalabra - 2) + arr[i].back();
    }

    for(const string& element : arr){
        cout << element << endl;
    }
}