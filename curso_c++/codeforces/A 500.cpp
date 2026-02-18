#include <bits/stdc++.h>


using namespace std;

int main(){
    int n; cin >> n;
    int t; cin >> t;

    vector <int> a(n);

    a[0] = 0;
    for(int i = 1; i < n; i++){
        cin >> a[i];
    }

    int pos = 1;
    bool ok = false;
    while(pos < t){
        pos += a[pos];
    }

    

    cout << (pos == t ? "YES" : "NO") << "\n";



}

