// Autor: Mintwi
// Fecha: 2025-10-25

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n % 2 == 0){
            for(int i = 1; i <= n; i++ ){
                if( i % 2 == 0){
                    cout << i - 1 << " ";
                } else {
                    cout << i + 1 << " ";
                }
            }
            cout << "\n";
        } else {
            if( n == 3){
                cout << 3 << " " << 1 << " " << 2 << "\n";
            } else {
                cout << 3 << " " << 1 << " " << 2 << " ";

                for(int i = 4; i <= n; i++){
                    if( i % 2 == 0){
                        cout << i + 1 << " ";
                    } else {
                        cout << i - 1 << " ";
                    }
                }
                cout << "\n";
            }
        }
        
    }

    return 0;
}