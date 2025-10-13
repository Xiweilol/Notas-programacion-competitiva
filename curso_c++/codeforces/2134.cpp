#include <bits/stdc++.h>

using namespace std;
/*Esta solucion es desues de ver la solucion del problema, solo para practicar la logica*/
int main(){
    int t; cin >> t;

    while(t--){
        int n,k; cin >> n >> k;

        vector <long long> arr(n);
        for(int i = 0; i < n; ++i){
            cin >> arr[i]; 
        }
        
        for(auto&i : arr){
            i = i + k *(i % (k+1));
            cout << i << " ";
        }
        cout << '\n';

    }
}