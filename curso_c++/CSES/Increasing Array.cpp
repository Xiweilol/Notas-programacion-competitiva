#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int n; cin >> n;

    vector <int> arr(n);
    //necesitamos vectores en estos casos
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        
    }
    long long temp = 0;
    long long pasos = 0;
    for (int i = 1; i < arr.size();++i){
        //si el elemnto es menor que el anterior
        if(arr[i] < arr[i-1]){
            //el elemento actual va ser sumado la diferencia entre el actual y el anterior
            temp =  arr[i-1] - arr[i];
            arr[i] += temp;
            pasos += temp;
        }
    }
    cout << pasos;

    return 0;
    
}