#include <iostream>
#include <string>

using namespace std;

struct Distance{
    int feet;
    float inch;
};

int main(){
    Distance d;
    Distance* ptr = &d;

    cout << "escibe en feet: ";
    cin >> (*ptr).feet;
    cout << "escibe inch: ";
    cin >> (*ptr).inch;

    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}
