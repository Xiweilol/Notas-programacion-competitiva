// Autor: Mintwi
// Fecha: 2025-12-22

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int N; cin >> N;

    vector <vector <int>> arr(N+1,vector<int>(4,0));


    map <int,int> bott = {{1,1}, {2,1},{3,1}};

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= 3; j++){
            cin >> arr[i][j];
        }
    }

    

    return 0;
}