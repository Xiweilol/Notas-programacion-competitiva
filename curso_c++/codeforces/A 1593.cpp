// Autor: Mintwi
// Fecha: 2025-11-02

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;

        int maximo = max({a,b,c});

        int cnt = 0;

        vector <int> arr = {a,b,c};

        for(int& n : arr){
            if(n == maximo){
                cnt++;
            }
        }

        if(cnt == 3){
            cout << 1 << " " << 1 << " " << 1 << "\n";
        } else if(cnt == 2){
            for(int& n : arr){
                if(n == maximo){
                    cout << 1 << " ";
                } else {
                    cout << maximo - n + 1 << " ";
                }
            }
            cout << "\n";
        } else {
            for(int& n : arr){
                if(n == maximo){
                    cout << 0 << " ";
                } else {
                    cout << maximo - n + 1 << " ";
                }
            }        
            cout << "\n";
        }

    }
    return 0;
}