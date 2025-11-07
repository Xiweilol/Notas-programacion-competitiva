// Autor: Mintwi
// Fecha: 2025-11-06

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m,r,c;
        cin >> n >> m >> r >> c;
        r--;
        c--;
        vector <string> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool p0 = false,p1 = false,p2 = false;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == 'B'){
                    if(i == r && j == c){
                        p0 = true;
                        break;
                    }

                    if(i == r || j == c){
                        p1 = true;
                    } else {
                        p2 = true;
                    }
                }
            }
        }

        if(p0){
            cout << 0 << "\n";
        } else if(p1){
            cout << 1 << "\n";
        } else if(p2){
            cout << 2 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}