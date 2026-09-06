// Autor: Mintwi
// Fecha: 2026-09-06
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        //creamos un vector de diferencia
        
        vector <vector<int>> diff(n+2,vector<int>(n+2,0));

        for(int i = 0; i < queries.size(); i++){
            //vamos a incrementarle un 1 para que sea un arreglo que empieza desde 1
            int x1 = queries[i][0]+1;
            int y1 = queries[i][1]+1;
            int x2 = queries[i][2]+1;
            int y2 = queries[i][3]+1;

            diff[x1][y1] += 1;
            diff[x1][y2+1] -= 1;
            diff[x2+1][y1] -= 1;
            diff[x2+1][y2+1] += 1;
        }

        vector<vector<int>> pref(n,vector<int>(n,0));

        for(int i = 1; i <= n;i++){
            for(int j = 1; j <= n; j++){
                diff[i][j] += diff[i-1][j] + diff[i][j-1] - diff[i-1][j-1];

                pref[i-1][j-1] = diff[i][j];
            }
        }

        return pref;
    }
};

const ll mod = 1000000000 + 7;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    return 0;
}