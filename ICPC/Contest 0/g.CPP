// Autor: Mintwi
// Fecha: 2026-03-26
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


const int maxn = 5000 + 5;

bool visito[maxn][maxn];

bool memo[maxn][maxn];

const ll mod = 1000000000 + 7;

// bool dp(int cntChip, int turno){
//     //si agarra el ultimo, significa que gano
//     if(cntChip == 0) return false;

//     if(visito[cntChip][turno]) return memo[cntChip][turno];

//     visito[cntChip][turno] = true;

//     bool lol = false;

//     for(int x = 1; x <= min(turno,cntChip); x++){
//         //si pudo llegar al final gana regresara verdadero
//         if(!dp(cntChip-x,turno+1)){
//             lol = true;
//             break;
//         }
//     }

//     return memo[cntChip][turno] = lol;

// }

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    //caso base, todo los turnos, llega al cero, pierde
    for(int turno = 1; turno <= n; turno++){
        memo[0][turno] = false;
    }

    




    return 0;
}