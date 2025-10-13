#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    //algoritmo
    //sinedo que en cada ordenamiento, se deja ya el mayor o el menor en el ultimo lugar, entonces no necesitamos hacerlo comparar, por eso n -1
    for(int i = 0; i < n - 1; ++i){
        bool cambio = false;
        //para recorrer cada caso,  n - i - 1, para cada elemento ordenado, ya no necesitas compararla otra vfez
        for(int j = 0; j < n-i-1; ++j){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
                cambio = true;
            }
        }
        if(!cambio)  break;
    }

        // Mostrar resultado
    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}