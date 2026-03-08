// Autor: Mintwi
// Fecha: 2026-03-06
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;

const int maxn = 5000 + 5;

int memo[maxn][maxn];
bool visito[maxn][maxn];

string n, m;
//el estado son las indices que llevamos carreando
int dp(int i, int j){
    //si se acaba una, el costo que queda es el tomaño que quedo del otro, ya que solo quedamos insertar o eliminar
    if(i == 0) return j;
    if(j == 0) return i;

    if(visito[i][j]) return memo[i][j];

    visito[i][j] = true;
    //si soniguales simplemente avanza
    if(n[i-1] == m[j-1]) return memo[i][j] = dp(i-1,j-1);

    //ahora con las tres opociones,necesitamos sabes quien esta devolviendo el minimo de las tres operaciones
    memo[i][j] = 1 +  min({dp(i-1,j-1),dp(i-1,j),dp(i,j-1)});

    return memo[i][j];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    cout << dp(n.size(),m.size()) << "\n";
    return 0;
}