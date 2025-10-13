#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;

    int contador = 0;
    for(int i = 0; i < n; ++i){
        int a,b,c;
        cin >> a >> b >> c;

        if(a+b+c >= 2){
            contador++;
        }
    }

    cout << contador;
}