#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;

    vector <int> arr(n);

    bool creciente = true;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    for(int i = 1; i < arr.size(); ++i){
        
        if(arr[i] <= arr[i-1]){
            creciente = false;
            break;
        } 
    }

    if(creciente){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}