#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int contador = 0;
    for(int i = 0; i < n; ++i){
        int a,b;
        cin >> a >> b;
        if(b > a){
            contador++;
        }
    }
    
    cout << contador;
    return 0;
}