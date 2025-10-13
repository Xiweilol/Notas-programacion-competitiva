#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map <string,string> contenedor = {
        {"N","S"},
        {"S","N"},
        {"W","E"},
        {"E","W"},
        {"NE","SW"},
        {"SW","NE"},
        {"NW", "SE"},
        {"SE","NW"}
    };

    string d; cin >> d;

    cout << contenedor[d];
}