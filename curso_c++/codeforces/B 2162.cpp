#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        string s; cin >> s;

        vector <int> arr;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                //para la posicion
                arr.push_back(i);
            }
        }

        cout << arr.size() << "\n";

        for(int n : arr){
            cout << n + 1 << " ";
        }

        cout << "\n";
    }

    return 0;
}