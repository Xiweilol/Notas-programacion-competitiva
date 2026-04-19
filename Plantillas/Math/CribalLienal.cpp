#include <bits/stdc++.h>
using namespace std;

// Criba lineal
// lp[x] = menor factor primo de x
// primes = lista de primos

const int MAXN = 1e6 + 5;

vector<int> primes;
int lp[MAXN];

void linear_sieve(int n) {
    for (int i = 2; i <= n; i++) {
        if (lp[i] == 0) {
            lp[i] = i;
            primes.push_back(i);
        }

        for (int p : primes) {
            if (1LL * i * p > n) break;

            lp[i * p] = p;

            // evita marcar varias veces el mismo número
            if (p == lp[i]) break;
        }
    }
}

// Factorización usando lp[]
vector<int> factorize(int x) {
    vector<int> factors;

    while (x > 1) {
        factors.push_back(lp[x]);
        x /= lp[x];
    }

    return factors;
}

int main() {
    int n = 1000000;
    linear_sieve(n);

    // Ejemplo: imprimir primos hasta 50
    for (int p : primes) {
        if (p > 50) break;
        cout << p << " ";
    }
    cout << "\n";

    // Ejemplo: factorizar 84
    int x = 84;
    vector<int> f = factorize(x);

    for (int v : f) {
        cout << v << " ";
    }
    cout << "\n";
}