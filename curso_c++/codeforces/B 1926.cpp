// Autor: Mintwi
// Fecha: 2026-01-30

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){

        int n; cin >> n;

        vector <string> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int len = 0;
        bool square = true;
        bool check = false;
    
        for(int i = 0; i < n; i++){
            int temp = 0;
            for(int j = 0; j < n; j++){
                if(a[i][j] == '1'){
                    temp++;
                    check = true;
                }
            }

            if(check && len != 0){
                if(len != temp){
                    square = false;
                    break;
                }
            } else{
                len = temp;
            }
        }

        if(square){
            cout << "SQUARE\n";
        } else{
            cout << "TRIANGLE\n";
        }

    }

    return 0;
}