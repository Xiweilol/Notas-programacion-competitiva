#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int>arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());
        set <int> auxset;

        vector <int> aux;

        for(int& i : arr){
            if(auxset.count(i)){
                aux.push_back(i);
            } else {
                cout << i << " ";
                auxset.insert(i);
            }
        }

        if(!aux.empty()){
            for(int& i : aux){
                cout << i << " ";
            }
        }
        

        cout << "\n";
    }

    return 0;
}