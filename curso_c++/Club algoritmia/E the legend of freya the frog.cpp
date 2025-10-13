#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        long long x,y,k; cin >> x >> y >> k;

        long long ans = 0;

        int pasosX = (x/k) + (x % k != 0);
        int pasosY = (y/k) + (y % k != 0);

        if(pasosX > pasosY){
            // si el paso que necesita x es mayor que el y, - 1 para el caso suepr grande de 1000000
            ans = 2 * pasosX - 1;
        } else {
            //si no simple multiplicacion pro los pasos
            ans = 2 * pasosY ;
        }

        cout << ans << "\n";
    }

    return 0;
}