#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t; 
    const long long N = 1'000'000'000'000L;
    while(t--){
        int64_t x; cin >> x;
        unordered_set <int64_t> cont;

        //lo metemos en unraiz cubica los resultados del cubo
        for(long long i = 1; i * i * i <= N; i++){
            cont.insert(i*i*i);
        }
        bool ans = false;
        for(long long i = 1; i * i * i <= x; i++){
            if(cont.count(x - i * i * i )){
                ans = true;
                break;
            }
        }
        
        if(ans){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}