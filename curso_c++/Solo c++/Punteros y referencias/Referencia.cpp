#include <iostream>

using namespace std;

int main(){
    string city = "Paris";

    string& ref_city = city;

    cout << "Variable Value: " << city << endl;
    cout << "Reference Value: " << ref_city << endl;

    return 0;
}