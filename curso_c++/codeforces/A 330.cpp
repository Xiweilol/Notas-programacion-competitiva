// Autor: Mintwi
// Fecha: 2026-01-10

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r,c; cin >> r >> c;

    vector <string> arr(r);

    for(int i = 0; i < r; i++){
        cin >> arr[i];
    }

    int filaS = 0;
    for(int i = 0; i < r; i++){
        bool ok = false;
        for(int j = 0; j < c;j++){
            if(arr[i][j] == 'S'){
                ok = true;
                break;
            }
        }
        if(ok){
            filaS++;
        } 

    }

    int columS = 0;
    for(int i = 0; i < c; i++){
        bool ok = false;
        for(int j = 0; j < r;j++){
            if(arr[j][i] == 'S'){
                ok = true;
                break;
            }
        }
        if(ok){
            columS++;
        } 

    }

    int ans = r * c - filaS * columS;

    cout << ans << "\n";
    return 0;
}