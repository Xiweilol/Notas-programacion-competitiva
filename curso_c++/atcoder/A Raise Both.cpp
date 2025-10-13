#include <iostream>

using namespace std;

int main(){
    int l,r; cin >> l >> r;

    if(l == 1 && r != 1){
        cout << "Yes";
    } else if(r == 1 && l == 0){
        cout << "No";
    } else {
        cout << "Invalid";
    }

    return 0;
}