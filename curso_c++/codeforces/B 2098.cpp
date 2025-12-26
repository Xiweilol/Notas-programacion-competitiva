// Autor: Mintwi
// Fecha: 2025-12-25

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n,k; cin >> n >> k;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        // definimos el tamaño de la ventana
        int s = n - k;

        int L = INT_MAX,R = INT_MIN;
        sort(a.begin(),a.end());

        set <int> S;
        //hacemos la vetana
        for(int l = 0; l + s - 1 < n; l++){
            
            // si despues de quitar k bares, queda impar,
            //solo es una tienda a la vez
            if(s % 2 == 1){
                //primero hace la division de tamaño de la ventana
                //despues le aumentamos el indice para encontrar la mediana
                int mid = l + s / 2;
                int x = a[mid];

                L = min(L,x);
                R = max(R,x);

            } else {
                //para la drecha siempre division techo
                int midRight = l + s / 2;
                int midLeft = midRight - 1;
                //aqui lo que necesitamos es un intervalo
                
                int left = a[midLeft];
                int right = a[midRight];

                L = min(L,left);
                R = max(R,right);                
            }

        }

        cout << R - L + 1 << "\n";
        

    }

    return 0;
}