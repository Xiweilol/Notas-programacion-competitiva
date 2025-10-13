#include <iostream>

int findElementIndex(int arr [],int arrSize,int elemento){
    for (int i = 0; i < arrSize;i++){
        if (elemento == arr[i]){
            return i;
        }
    }
}

int main(){
    int n [5]= {2,4,6,8,10};
    std::cout << "Elemento encontrado en posicion: " << findElementIndex(n,5,6);
}