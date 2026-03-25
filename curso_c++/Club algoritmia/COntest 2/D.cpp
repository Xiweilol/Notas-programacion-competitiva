// Autor: Mintwi
// Fecha: 2026-03-24
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

bool valid(int i, int j, int n, int m){
    return (i >= 0 && i < n) && (j >= 0 && j < m);
}

//devuelve el numero de aparicion del diferentes componentes del laberinto
int dfs(int i, int j,vector <vector <char>>& laberinto,vector <vector <int>>& laberinto_modificado, vector <vector<int>>& visito, int comp,int n,int m){
    if(visito[i][j] == 1) return 0;
    //marcamos en el laberinto, el componente
    laberinto_modificado[i][j] = comp;
    visito[i][j] = 1;
    int cnt = 1;
    for(int k = 0; k < 4; k++){
        int movx = i + dx[k], movy = j + dy[k];
        if(valid(movx,movy,n,m) && laberinto[movx][movy] == '.' && visito[movx][movy] == 0){
            cnt += dfs(movx,movy,laberinto,laberinto_modificado,visito,comp,n,m);
        }
    }

    return cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;

    vector <vector <char>> laberinto(n,vector<char>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> laberinto[i][j];
        }
    }

    //vector nuevo, para guardar el laberinto modificado
    vector <vector <int>> laberinto_modificado(n,vector<int>(m,0));
    //arreglo para guardar el tamaño de cada componentes del laberinto
    vector <int> a;
    a.push_back(0);
    vector <vector<int>> memo(n,vector<int>(m,0));

    int comp = 1;

    //volvemos a iterar para hacer dfs sobre el arreglo que vamos a meterle los componentes uwu
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(memo[i][j] == 0 && laberinto[i][j] == '.'){
                int suma = dfs(i,j,laberinto,laberinto_modificado,memo,comp,n,m);
                comp++;
                a.push_back(suma);
            }
        }
    }

    set <int> S;
    //construccion de respuesta
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            if(laberinto[i][j] == '*'){
                for(int k = 0; k < 4; k++){
                    int movx = i + dx[k], movy = j + dy[k];
                    if(valid(movx,movy,n,m) && laberinto[movx][movy] == '.'){
                        S.insert(laberinto_modificado[movx][movy]);
                    }

                }
                int sum = 1;

                for(int s : S){
                    sum += a[s];
                }

                cout << sum % 10 << "";
                S.clear();
            } else{
                cout << laberinto[i][j] << "";
            }
        }
        cout << "\n";
    }



    return 0;
}