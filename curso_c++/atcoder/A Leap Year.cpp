#include <iostream>

using namespace std;

int main(){
    int y; cin >> y;

    if(y % 4 != 0 || (y % 100 == 0 && y % 400 != 0)){
        cout << 365;
    } else if(y % 4== 0 && y % 100 != 0){
        cout << 366;
    } else {
        cout << 366;
    }

    return 0;
}