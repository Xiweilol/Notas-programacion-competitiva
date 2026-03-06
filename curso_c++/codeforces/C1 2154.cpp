//Mintwi

#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

const int maxn = 2e5 + 5;

vector <int> primos;
void generarPrimo(){
    for(int i = 2; i <= maxn; i++){
        bool ok = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                ok = false;
                break;
            }
        }

        if(ok) primos.push_back(i);
    }
}

//algoritmos de criba, ahora solo devolvemos una vez a cada factor primo
vector <int> Criba(int x){
    vector <int> factor;
    for(int i = 0;primos[i] * primos[i] <= x; i++ ){
        if(x % primos[i] == 0){
            factor.push_back(primos[i]);
            //si sigue siendo divisor a ese numero, 
            //lo vamos a dividir las veces que se pueda para olvidar ese factor
            while(x % primos[i] == 0) x /= primos[i];
        }
    }
    //tiene que ser diferentes de 0
    if(x > 1) factor.push_back(x);
    return factor;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    generarPrimo();
    
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> arr(n);
        
        for(int i = 0; i < n; i++) cin >> arr[i];
        for(int i = 0; i < n; i++){
            int b; cin >> b;
        }

        set <int> checkZero;
        set <int> checkOne;
        bool zero = false;
        bool one = false;
        //checamos para la opcion del 0
        for(int i = 0; i < n; i++){
            //generamos factores primos unicos para cada elemento
            vector <int> factor = Criba(arr[i]);
            //iteramos cada elemento
            for(int p : factor){
                //si lo encuentra significa que tiene un divisor primo en comun, pero no muere ya que por si 
                if(checkZero.count(p)){
                    zero = true;
                    break;
                } 
                checkZero.insert(p);
            }
        }

        if(zero){
            cout << 0 << "\n";
            continue;
        }

        //checar para el opcion 1, sacamos factores primos ahora para cada elemento +1;
        for(int i = 0; i < n; i++){
            vector <int> factor = Criba(arr[i] + 1);
            for(int p : factor){
                if(checkZero.count(p)){
                    one = true;
                    break;
                }
            }
        }

        cout << (one ? 1 : 2) << "\n";


    }



    
}