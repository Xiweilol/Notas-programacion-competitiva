#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    double lol = 0;

    for(int i = 0; i < n; i++){
        double ai; cin >> ai;

        lol += ai;
    }

    cout << lol / n << "\n";


    

}