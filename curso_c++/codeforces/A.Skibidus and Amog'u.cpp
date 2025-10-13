#include <iostream>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string w; cin >> w;

        int largo = w.length();

        w.replace(largo - 2,2,"i");

        cout << w << endl;
    }

    return 0;
}