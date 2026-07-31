#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int sumaEspacios = 0;
        int minimoEspacios = INT_MAX;

        for (int i = 0; i < n; i++) {
            string linea;
            getline(cin, linea);

            int espacios = 0;

            for (char c : linea) {
                if (c == ' ') {
                    espacios++;
                }
            }

            sumaEspacios += espacios;
            minimoEspacios = min(minimoEspacios, espacios);
        }

        int respuesta = sumaEspacios - n * minimoEspacios;

        cout << respuesta << '\n';
    }

    return 0;
}