#include <iostream>

using namespace std;

int main(){
    //cuando sea b > a, significa que siemore el b cube a la a, asi que no importa
    //entonces solo necesitamos asegurar la paridad de de b sea igual que la n, para llenar los cuadros del centro

    //cuando sea a > b, entonces necesitamos dividirla, para este caso el a tambien deberia estar apariciendo en el centro
    // entonces hay que asegurar que a tenga la misma paridad que la n tambien

    int t; cin >> t;

    while(t--){
        int n,a,b; cin >> n >> a >> b;

        if(b >= a){
            cout << ((n % 2)== (b % 2) ? "Yes\n" : "No\n" );
        } else {
            cout << ((n % 2) == (b % 2) && (n % 2) == (a % 2) ? "Yes\n" : "No\n");
        }

    }
    return 0;
}