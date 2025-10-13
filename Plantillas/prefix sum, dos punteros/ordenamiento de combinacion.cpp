#include <iostream>
#include <vector>

using namespace std;

//en teoria, es la funcion para mezclar los subarreglos que separamos
void merge(vector<int>& arr, int izquierda,int medio, int derecha){
    //tamaño de las dos mitades que hicimos
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    // Arreglso temporales 
    vector <int> L(n1);
    vector <int> R(n2);

    // copia los datos a arreglos
    for(int i = 0; i < n1; i++){
        L[i] = arr[izquierda + i];
    }

    for(int j = 0; j< n2; j++){
        R[j] = arr[medio + 1 + j];
    }
 
    //indices iniciales para L[], R[] y el arreglo combinado

    int i = 0,j = 0, k = izquierda;

    //Mezclar mientras haya elementos en ambas mitades
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[], si hay
    while (i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[], si hay
    while (j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Funcion recursica de Merge Sort
void mergeSort(vector<int>& arr,int izquierda,int derecha){
    if(izquierda < derecha){
        int medio = izquierda +(derecha - izquierda) / 2; // encuentra el punto medio para dividir

        //Ordenar la primera y segunda mitad
        mergeSort(arr,izquierda,medio);
        mergeSort(arr,medio + 1,derecha);

        //Mezclar las dos mitades ordenadas
        merge(arr,izquierda,medio,derecha);
    }
}