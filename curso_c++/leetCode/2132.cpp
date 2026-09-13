// Autor: Mintwi
// Fecha: 2026-09-12
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll mod = 1000000000 + 7;

class Solution {
public:
    bool possibleToStamp(vector<vector<int>>& grid,
                         int stampHeight,
                         int stampWidth) {

        int filas = grid.size();
        int columnas = grid[0].size();

        vector<vector<int>> pref(
            filas + 1,
            vector<int>(columnas + 1, 0)
        );

        vector<vector<int>> diff(
            filas + 2,
            vector<int>(columnas + 2, 0)
        );

        // Prefix sum 2D
        for (int i = 1; i <= filas; i++) {
            for (int j = 1; j <= columnas; j++) {

                pref[i][j] =
                    grid[i - 1][j - 1]
                    + pref[i - 1][j]
                    + pref[i][j - 1]
                    - pref[i - 1][j - 1];
            }
        }

        // Insertar rectángulo en diff
        auto insertar = [&](int x1, int y1,
                            int x2, int y2, int v) {

            diff[x1 + 1][y1 + 1] += v;
            diff[x1 + 1][y2 + 2] -= v;
            diff[x2 + 2][y1 + 1] -= v;
            diff[x2 + 2][y2 + 2] += v;
        };

        // Consultar suma del rectángulo
        auto consultar = [&](int x1, int y1,
                             int x2, int y2) {

            return pref[x2 + 1][y2 + 1]
                 - pref[x1][y2 + 1]
                 - pref[x2 + 1][y1]
                 + pref[x1][y1];
        };

        for(int i = 0; i < filas - stampHeight + 1; i++){
            for(int j = 0; j < columnas - stampWidth +1;j++){
                int x2 = i + stampHeight -1;
                int y2 = j + stampWidth - 1;

                if(consultar(i,j,x2,y2) == 0){
                    insertar(i,j,x2,y2,1);
                }
            }
        }

        for(int i = 0; i < filas;i++){
            for(int j = 0; j < columnas; j++){
                diff[i+1][j+1] += diff[i][j+1] + diff[i+1][j] - diff[i][j];
                if(grid[i][j] == 0 && diff[i+1][j+1] == 0) return false;
            }
        }

        return true;
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    return 0;
}