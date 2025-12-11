#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    
    vector <int> f(n+1,0);

    for(int i = 1; i <= n; i++){
        cin >> f[i];
    }

    int pas = false;

    for(int i = 1; i <= n; i++){
        if(f[f[f[i]]] == i){
            pas = true;
            break;
        }
    }

    if(pas){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }



}