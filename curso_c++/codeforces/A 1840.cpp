#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        string ans = "";

        int cont = 0;

        //aqui mientra el cont sea menor que el tamaño maximo entra el while
        while(cont < n ){
            //asignamos el valor real a la cadena
            char l = s[cont];
            ans += l;
            //asignar siguiente espacio con j para simular el movimiento
            int j = cont + 1;
            //verificamos primero que si la j ya salio el tamaño de la cadena
            //como j es un indice que utilizamos para recorrer la cadena
            while(j < n && l != s[j]){
                j++; 
            }
            //saltamos hasta el indice siguiente del arreglo
            cont = j + 1;
        }

        cout << ans << "\n";
    }
}