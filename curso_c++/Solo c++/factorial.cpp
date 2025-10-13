 #include <iostream>

 int factorial(int n){
    //si es mayor que 1, me calcula el factoria utilizando recursion, en este caso n * n-1
    if (n > 1){
        return n * factorial(n-1);
    } else{
        return 1;
    }
 }
//calcular fibonacci, comienza con 0 y 1, Cada número subsiguiente es la suma de los dos anteriores.
int fibonacci(int n){
    //retornamos los valores iniciales para este algoritmo, tambien son condiciones para finalizar este bucle.
    if (n == 0){return 0;}
    if (n == 1){return 1;}
    // hacemos la suma del anterior 2 numeros del fibonacci, es lo mismo
    return fibonacci(n-1) + fibonacci(n-2);
}
 int main(){

    std::cout << fibonacci(6);
    /*
        std::cout << "introduzca un numero entero no negativo" << std::endl;
    //input, lo escribe
    std::cin >> num;

    std::cout << "El numero factorial de " << num << " es: " <<factorial(num);
    */

 }

 