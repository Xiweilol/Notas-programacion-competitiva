#include <iostream>


using namespace std;

int main(){
    int n; cin >> n;

    if ( n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }

    // para numeros impares
    for(int i = n; i >= 1 ; --i){
        if(i % 2 == 1) cout << i << " ";
    }

    //para numeros pares
    for(int i = n; i >= 1 ; --i){
        if(i % 2 == 0) cout << i << " ";
    }

    return 0;
}   