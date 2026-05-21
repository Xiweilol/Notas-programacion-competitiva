// Autor: Mintwi
// Fecha: 2026-05-18
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

const ll mod = 1000000000 + 7;

ull ans;
ull a;
void generar(int pos,int len,ull s,int d1,int d2,vector<ull> &nums){
    //ya generamos un numero con digito que queremos
    if(pos == len){
        nums.push_back(s);
        return;
    }

    generar(pos+1,len,s * 10 + d1,d1,d2,nums);
    generar(pos+1,len,s * 10 + d2,d1,d2,nums);

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //vamos a generar todo los pares posibles, de d1 y d2
    map<pair<int,int>, vector<ull>> pares;


    vector <ull> nums;
    for(int i = 0; i <= 9; i++){
        for(int j = i+1; j <= 9; j++){
            vector <ull> nums;
            for(int k = 1; k <= 18; k++){
                generar(0,k,0,i,j,nums);
            }
            sort(nums.begin(),nums.end());
            //una vez que tenemos el par i,j con sus frecuancias generado, lo guardamos
            pares[{i,j}] = nums;
        }
    }

    
    int t; cin >> t;
    while(t--){
        cin >> a;
        int n; cin >> n;

        int d1,d2;
        cin >> d1 >> d2;

        vector <ull>& numeros = pares[{d1,d2}];
        sort(numeros.begin(),numeros.end());
        ll l = 0, r = numeros.size()-1;
        ll posi = numeros.size();

        while(l <= r){
            ll mid = l + (r-l) /2;

            if(numeros[mid] >= a){
                posi = mid,
                r = mid-1;
            } else {
                l = mid +1;
            }
        }

        ull ans = ULLONG_MAX;

        //si lo encontro, entonces hacemos resta, es por su derecha
        if(posi < numeros.size()){
            ans = min(ans,numeros[posi] - a);
        }

        //por su izquierda
        if(posi > 0){
            ans = min(ans, a - numeros[posi-1]);
        }


        cout << ans << "\n";
    }

    return 0;
}