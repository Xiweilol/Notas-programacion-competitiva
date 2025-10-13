#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int negative = 0,positive = 0;
    
    int obj = (n+1) / 2;

    for(int i = 0; i < arr.size();++i){
        if(arr[i] > 0){
            positive++;
        } else if(arr[i] < 0){
            negative++;
        }
    }

    if(positive >= obj){
        cout << 1;
        return 0;
    } else if(negative >= obj){
        cout << -1;
        return 0;
    } else {
        cout << 0;
        return 0;
    }


}