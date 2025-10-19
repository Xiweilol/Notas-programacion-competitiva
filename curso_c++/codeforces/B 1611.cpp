// Autor: Mintwi
// Fecha: 2025-10-18

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        long long a,b; cin >> a >> b;

        //definimos los rangos validos
        long long low = 0, high = min({a,b,(a+b) / 4});

        while(low < high){
            long long mid = (low + high + 1) / 2;

            //las condiciones para que cumpla el last true
            //equipos formados debe de ser menor que el a
            //menor que el b
            //y lo que resta de personas debe de ser menor a la suma de a y b
            if(mid <= a && mid <= b && 4 * mid <= a + b){
                low = mid;
            } else {
                high = mid - 1;
            }
        }

        cout << low << "\n";
    }

    return 0;
}