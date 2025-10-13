#include <iostream>
#include <vector>

std::vector <std::vector <int>> addToNestedArray (std::vector <std::vector <int>>arr,int num){
    for (int i = 0; i < arr.size();i++){
        arr[i].push_back(num);
    }
    return arr;
}

int main(){
    std::vector <std::vector<int>> lista = {{1,2},{3,4},{5,6}};
    int n = 7;

    std::vector <std::vector<int>> result = addToNestedArray(lista,n);
    for (std::vector vector: result){
        for (int n : vector){
            std::cout << n << " ";
        }
    }
}