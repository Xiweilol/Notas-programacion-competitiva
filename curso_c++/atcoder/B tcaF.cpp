#include <iostream>

using namespace std;

long long inverse_factorial(unsigned long long n){
    if(n == 1){
        return 1;
    }

    unsigned long long d = 2;
    //ejecuta mientra se puede dividir, que cumple con las condiciones de factorial de 1 a n
    while (n % d == 0){
        //divide el n a la d y lo asigna el resultado
        n /= d;
        //va ir aumentando 1 en 1, que cumple idea de 1 hasta n
        d++;
    }

    return (n == 1) ? (long long) (d - 1) : -1;
}
int main(){
    unsigned long long x; cin >> x;

    cout << inverse_factorial(x);

}