#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector <int> a = {1, 2, 3, 4, 5, 4, 1, 4, 1, 5, 4, 6};

    sort(a.begin(),a.end());

    for(int n : a){
        cout << n << " ";
    }
}
