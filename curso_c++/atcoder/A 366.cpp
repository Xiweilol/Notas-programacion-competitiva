#include <iostream>

using namespace std;

int main(){
    int n,t,a; cin >> n >> t >> a;


    // consideramos que si alguien tiene mas de la mitad de n, ya es ganado seguro
    // es n + 1 siendo que es un impar, y es una division de piso, para que salga mas de la mitad, por eso el  + 1;
    //si no va salir menor
    if(a >= (n+1)/ 2 || t >= (n+1)/ 2){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}