#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    string h = "I hate";
    string l = "I love";

    for(int i = 1; i <= n; i++ ){

        if(i % 2 == 0){
            cout << l;
        } else {
            cout << h;
        }
        if(i == n){
            cout << " it";
            break;
        }

        cout << " that ";
    }

    return 0;
}