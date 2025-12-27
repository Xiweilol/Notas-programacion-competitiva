// Autor: Mintwi 
// Fecha: 2025-12-27

#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        string cad(m+2,'0');
        vector<string> a(n+2, cad);

        for(int i = 1; i <= n; i++){
            string row; cin >> row;
            a[i] = "0" + row + "0";
        }

        // Si n==1 o m==1, siempre se puede
        if(n == 1 || m == 1){
            cout << "YES\n";
            continue;
        }

        // prefix sum por fila y columna (con padding)
        vector<vector<int>> prefRow(n+2, vector<int>(m+2, 0));
        vector<vector<int>> prefCol(n+2, vector<int>(m+2, 0));

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                prefRow[i][j] = prefRow[i][j-1] + (a[i][j] == '1');
                prefCol[i][j] = prefCol[i-1][j] + (a[i][j] == '1');
            }
        }

        bool ok = true;

        for(int i = 1; i <= n && ok; i++){
            for(int j = 1; j <= m; j++){
                if(a[i][j] == '1'){
                    //checar todas las filas a su izquierda a ver si estan todas llenas
                    bool left_all_ones = (prefRow[i][j-1] == (j-1));
                    // checar la columna si esta todas llenas
                    bool up_all_ones   = (prefCol[i-1][j] == (i-1));

                    if(!left_all_ones && !up_all_ones){
                        ok = false;
                        break;
                    }
                }
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
