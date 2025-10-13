#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        if(n == 2){
            cout << "-1 2\n";
            continue;
        }
        if(n == 3){
            cout << "-1 3 -1\n";
            continue;
        }

        if(n%2 == 0){
            for(int i = 0; i < n; i++){
                if (i == n - 1){
                    cout << "2";
                    break;
                }    
                if(i % 2 == 0){
                    cout << "-1 ";
                } else {
                    cout << "3 ";
                }
            }
        } else {
            for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                cout << "-1 ";
            } else {
                cout << "3 ";
            }
        }
        }
        
        cout << "\n";
    }
    return 0;
}