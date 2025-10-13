#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;

    vector <int> arr(t);
    for(int i = 0; i < t; ++i){
        int n; cin >> n;
        int contador = 0;
        
        for(int j = 0; j < n; ++j){
            int a; cin >> a;
            if(a % 2 != 0){
                contador++;
            }
        }
        arr[i] = contador;
    }

    for(auto& num: arr){
        cout << num << endl;
    }

    return 0;
}