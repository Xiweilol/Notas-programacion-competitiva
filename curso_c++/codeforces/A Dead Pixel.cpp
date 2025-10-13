#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;

    vector <int> cont(t);
    for(int i = 0; i < t; ++i){
        int a,b,x,y; cin >> a >> b >> x >> y;
        
        //dividimops en 4 pantallas, evitando el punto muerto
        //izquierda
        //para izquierda x * b, derecha (a - 1 -x) * b; arriba a * y; abajo a * (b - 1 -y)

        int izquierda = x * b;
        int derecha = (a - 1 - x)*b;
        int arriba = a * y;
        int abajo = a * (b - 1 - y);

        int r1 = max(izquierda,derecha);
        int r2 = max(arriba,abajo);

        cont[i] = max(r1,r2);
        
    }

    for(auto& i : cont){
        cout << i << endl;
    }

    return 0;
}
