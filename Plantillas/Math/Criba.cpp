#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1000000; // límite hasta donde calcularemos primos

vector <int> primes;       // aquí guardaremos todos los primos encontrados
bool is_prime[MAXN + 1];  // arreglo para marcar si un número es primo o no

void sieve() {

    // inicialmente asumimos que todos los números >=2 son primos
    for(int i = 2; i <= MAXN; i++)
        is_prime[i] = true;

    // recorremos desde 2 hasta sqrt(MAXN)
    for(int i = 2; i * i <= MAXN; i++){

        // si i sigue marcado como primo
        if(is_prime[i]){

            // marcamos todos sus múltiplos como no primos
            for(int j = i * i; j <= MAXN; j += i){
                is_prime[j] = false;
            }
        }
    }

    // guardamos todos los números que quedaron como primos
    for(int i = 2; i <= MAXN; i++){
        if(is_prime[i])
            primes.push_back(i);
    }
}