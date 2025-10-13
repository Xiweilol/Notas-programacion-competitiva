#include <vector>
#include <iostream>


std::vector <int> sliceArray (std::vector <int> &arr, int inicio,int fin){
    std::vector <int> vectorResultante;
    for (int i = inicio; i <=fin; i++){
        vectorResultante.push_back(arr[i]);
    }
    return vectorResultante;
}

int main(){
    std::vector <int> parametro = {15,7,13,20,9};

    std::vector <int> resultado = sliceArray(parametro,1,3);
    
    for (int n : resultado){
        std::cout << n << " ";
    }
    
}