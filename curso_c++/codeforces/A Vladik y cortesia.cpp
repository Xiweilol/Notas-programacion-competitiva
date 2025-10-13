#include <iostream>

using namespace std;

int main(){
    int a,b; cin >> a >> b;

    int restante = 0;
    string perdedor = "";

    // no debe de romper antes de que cumple todo los ciclos xd
    
    while(true){
        restante++;
        if(a - restante < 0){
            perdedor = "Vladik";
            break;
        }
        a -= restante;
        
        restante++;

        if(b - restante < 0){
            perdedor = "Valera";
            break;
        }
        b -= restante;
    

    }

    cout << perdedor;
    return 0;
}