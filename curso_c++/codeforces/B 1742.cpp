#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        bool pas = true;

        unordered_set <int> cont;
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            if(cont.count(a)){
                pas = false;
            }
            cont.insert(a);
        }

        if(pas){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}