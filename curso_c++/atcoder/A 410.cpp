#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int k; cin >> k;
    int cont = 0;
    for(auto& i : arr){
        if(i >= k){
            cont++;
        }
    }

    cout << cont << "\n";

    return 0;
}