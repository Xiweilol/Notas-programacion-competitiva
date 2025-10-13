#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,s ; cin >> n >> s;

    vector <int> ra(n);
    vector <int> rb(n);

    for(int i = 0; i < n;++i){
        cin >> ra[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> rb[i];
    }
    
    if(ra[0] == 0){
        cout << "NO\n";
        return 0;
    }

    if(ra[s - 1] == 0){
        if(rb[s - 1] == 0){
            cout << "No\n";
            return 0;
        }
        bool logro = false;
        for(int i = s - 1; i < n; ++i){
            if(ra[i] == 1 && rb[i] == 1){
                logro = true;
                cout << "YES\n";
                break;
            }
        }
        if(!logro){
            cout << "NO\n";
        }

    } else {
        cout << "YES\n";
    }

    return 0;
}   