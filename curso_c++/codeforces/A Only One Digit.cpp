#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int x; cin >> x;
        int minimo = 1001;
        int temp = 0;
        while(x > 0){
            temp = x % 10;

            minimo = min(minimo,temp);

            x /= 10;
        }

        cout << minimo << "\n";

    }

    return 0;
}