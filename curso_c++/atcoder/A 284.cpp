#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;

    vector <string> arr(n);
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; ++i){
        cout << arr[n-i] << endl;;
    }

    return 0;
}