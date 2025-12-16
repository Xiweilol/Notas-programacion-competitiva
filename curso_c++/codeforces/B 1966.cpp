// Autor: Mintwi
// Fecha: 2025-12-16

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;

        vector <vector<char>> arr(n,vector<char>(m,'.'));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }

        bool pas = true;
        
        char colort = arr[0][0];
        char colorb = arr[n-1][m-1];

        bool diff = false;
        if(colort != colorb){
            diff = true;
        }
        //top y bot
        for(int i = 0; i < m; i++){
            if(diff && arr[0][i] == colort && arr[n-1][i] == colorb){
                pas = false;
            } else {
                pas = true;
                break;
            }
        }

        //left y right
        if(pas){
            for(int i = 0; i < n; i++){
                if(diff && arr[i][0] == colort && arr[i][m-1] == colorb){
                    pas = false;
                } else {
                    pas = true;
                    break;
                }
            }
        }


        if(pas){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }


    }

    return 0;
}