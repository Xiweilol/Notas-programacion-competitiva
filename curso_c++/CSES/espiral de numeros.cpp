#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arreglodedosdimension [5][5]= {
        {1,2,9,10,25},
        {4,3,8,11,24},
        {5,6,7,12,23},
        {16,15,14,13,22},
        {17,18,19,20,21}
    };

    int n; cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < n;++i){
        int a,b; cin >> a >> b;
        arr[i] = arreglodedosdimension[a-1][b-1];
    }

    for(const int& n : arr){
        cout << n << endl;
    }


    return 0;
}