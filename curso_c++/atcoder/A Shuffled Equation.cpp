#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector <int> arr;
    for(int i = 0; i < 3; ++i){
        int a; cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(),arr.end());

    if(arr[0] * arr[1] == arr[2]){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}