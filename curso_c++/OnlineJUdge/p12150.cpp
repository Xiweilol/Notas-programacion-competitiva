#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 1;

    while(cin >> n && n != 0){
        
        vector <int> a(n+1,0);

        bool ok = true;
        for(int i = 1; i <= n; i++){
            int c,p; cin >> c >> p;

            if(p == 0){
                a[i] = c;
                continue;
            }
            if(p > 0){
                if(i + p <= n && a[i+p] == 0){
                    a[i+p] = c;
                } else{
                    ok = false;
                    continue;
                }
            } else{
                if(i+p >= 1 && a[i+p] == 0){
                    a[i+p] = c;
                } else {
                    ok = false;
                    continue;
                }
            }
        }

        if(ok){
            for(int i = 1; i <= n; i++){
                
                if(i != n){
                    cout << a[i] << " ";
                } else{
                    cout << a[i];
                }
            }
        } else{
            cout << -1;
        }
        cout << "\n";
    }
}


