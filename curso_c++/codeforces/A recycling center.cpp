#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,c; cin >> n >> c;
        vector <long long> valido(n);

        for(int i = 0 ; i < n; ++i){
            cin >> valido[i];
        }

        sort(valido.rbegin(),valido.rend());
        //registrar cuantas bolsas fue eliminado
        int bolsaEliminadoGratis = 0;
        for(auto& i : valido){
            //calcular cuánto valdría después de que ya hemos destruido varios bolsas gratis
            //1ll << bolsaemininadogratis = i * (2^bolsaEliminadoGratis)
            long long sigue = i * (1LL << bolsaEliminadoGratis);
            if(sigue <= c){
                bolsaEliminadoGratis++;
            }
        }
        cout << n - bolsaEliminadoGratis  << "\n";
    }

    return 0;
}