#include <iostream>
using namespace std;

int main(){
    int a = 10,b = 100, result_a, result_b;

    result_a = ++a;
    cout << "result_a = " << result_a << endl;

    result_b = --b;
    cout << "result_b = " << result_b << endl;

    return 0;
}