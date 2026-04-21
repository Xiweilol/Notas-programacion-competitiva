#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int esta(int x,int*a,int i){
    for(int j = 0; j < i; j++){
        if(a[j] == x){
            return 1;
        }
    }

    return 0;
}

int main() {
    
    //arreglo de numeros generados random
    int arr[10]; 
    //generar la semila de eleccion de numero
    srand(time(NULL));
    int i = 0;
    while(i < 10){

        //elige un numero randon de 0 a 49
        int x = rand() % 50;
        //checa si esta en el arreglo
        if(!esta(x,arr,i)){
            // si no esta, lo asignamos y avanzamos i
            arr[i] = x;
            i++;
        } 
    }

    for(int i = 0; i < 10; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}   
