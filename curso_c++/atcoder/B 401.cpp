#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int error = 0;
    bool puedeAcceder = false;
    for(int i = 0; i < n; ++i){
        string accion; cin >> accion;
        if(accion == "login"){
            puedeAcceder = true;
        } else if(accion == "logout"){
            puedeAcceder = false;
        } else if(accion == "private" && !puedeAcceder){
            error++;
        } 
    }

    cout << error;

    return 0;
}