// Autor: Mintwi
// Fecha: 2025-12-11

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n,a,b; cin >> n >> a >> b;

        string s; cin >> s;
        int x = 0,y = 0;

        int cont = 0;
        int pas = false;
        for(int i = 0; i < 40; i++){

            for(char c : s){
                if(c == 'N'){
                    y += 1;
                } else if(c == 'E'){
                    x += 1;
                } else if(c == 'S'){
                    y -= 1;
                } else if(c == 'W'){
                    x -= 1;
                }

                if(x == a && y == b){
                    pas = true;
                    break;
                }
            }
            if(pas){
                break;
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