// Autor: Mintwi
// Fecha: 2025-12-22

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int N; cin >> N;

    vector <ll> a(N+1), b(N+1), c(N+1);

    for(int i = 1; i <= N; i++){
        cin >> a[i] >> b[i] >> c[i];
    }
    
    ll dpA = 0,dpB = 0, dpC = 0;

    for(int i = 1; i <= N; i++){
        // si Hoy tomo la A, entonces ayer no puede ser A
        // la formula es, A del dia de hoy, mas el maximo de b y c de ayer
        ll newA = a[i] + max(dpB,dpC);
        //igual con la b, misma logica
        ll newB = b[i] + max(dpA,dpC);
        //igual la c misma logica
        ll newC= c[i] + max(dpA,dpB);

        //actualizamos los valores por los 3 pasos
        dpA = newA;
        dpB = newB;
        dpC = newC;
    }

    cout << max({dpA,dpC,dpB}) << "\n";
    return 0;
}