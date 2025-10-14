#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;  cin >> t;

    while(t--){
        int a1,a2,a4,a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int p1a3,p2a3,p3a3;

        p1a3 = a4 - a2;
        p2a3 = a5 - a4;
        p3a3 = a1 + a2;

        if(p1a3 == p2a3 && p1a3 == p3a3){
            cout << 3 << "\n";
        } else if(p1a3 == p2a3 || p2a3 == p3a3 || p2a3 == p1a3 || p1a3 == p3a3){
            cout << 2 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }

    return 0;
}