// Autor: Mintwi
// Fecha: 2026-05-25
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*Observacion improtantisimo
propiedad geometria, tenemso qeu checar si las operaciones 
que nos da si forma un poligono cerrado, y esa propidad es que
el lado mas grande del poligono debe ser menor o igual que la suma de los otros lados*/
const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll px,py,qx,qy;
        cin >> px >> py >> qx >> qy;

        //distancia del puhnto final a punto inicial

        vector <long double> a;
        for(int i = 0; i < n; i++){
            long double ai; cin >> ai;

            a.push_back(ai);
        }

        long double dist = sqrt(1.0*(px-qx)*(px-qx) + 1.0*(py-qy)*(py-qy));
        a.push_back(dist);

        sort(a.begin(),a.end());
        long double fin = a[n];

        for(int i = 0; i < n; i++){
            fin -= a[i];
        }

        cout << (fin <= 0 ? "YES" : "NO") << "\n";

    }

    return 0;
}