#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,a; cin >> n >> a;

    vector <int> arr(n);

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    //para el primer cliente, su tiemp ode terminacion simepre se usa al valor original
    arr[0] += a;
    for(int i = 1; i < arr.size(); ++i){
        //si elemento es mayor que el tiempo, significa que no tiene que formar para hacer el tramite
        if(arr[i] > arr[i-1]){
            arr[i] += a;
            //si es menor, significa que tenemos que sumar el tiempo para que el anterior termine y mas el tiempo que tardara en terminar el actual.
        } else {
            arr[i] = arr[i -1] + a;
        }
    }

    for(int& n : arr){
        cout << n << endl;
    }

    return 0;

}