#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> par;
        vector <int> impar;

        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                par.push_back(i);
            } else {
                impar.push_back(i);
            }
        }

        sort(impar.rbegin(),impar.rend());

        for(int& i : par){
            cout << i << " ";
        }
        for(int& i : impar){
            cout << i << " ";
        }

        cout << "\n";
    }

    return 0;
}