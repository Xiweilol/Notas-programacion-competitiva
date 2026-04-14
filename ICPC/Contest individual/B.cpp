// Autor: Mintwi
// Fecha: 2026-04-14
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b; cin >> n >> a >> b;

    string s; cin >> s;

    bool A = false;
    bool B = false;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '*'){
            A = false;
            B = false;
            continue;
        }
        //si a es mayor que cero y que podemos poner una a
        //lo mas importante es que exista y que pueda poner a
        if(a > 0 && !A){
            //ahora checamos si ponemos un a
            //tenemos que checar si el b lo han puesto anterior mente, si es asi, es necesario poner una a
            if(B){
                a--;
                A = true;
                B = false;
                //si no significa que puedo poner los dos, ahora solo para maximizar, mas a poner al que tiene mas, si tiene igual pues cualquiera
            } else if(a >= b){
                a--;
                A = true;
                B = false;
                //si el b es mas grande, nos conviene poner el b para maximizar
            } else if(a <= b){
                b--;
                B = true;
                A = false;
            }
            //si no
        } else if(b > 0 && !B){
            if(A){
                b--;
                B = true;
                A = false;
            } else if(a >= b){
                a--;
                A = true;
                B = false;
                //si el b es mas grande, nos conviene poner el b para maximizar
            } else if(a <= b){
                b--;
                B = true;
                A = false;
            }
        } else{
            A = false;
            B = false;
            continue;
        }
        

        ans++;
    }

    cout << ans << "\n";
    return 0;
}