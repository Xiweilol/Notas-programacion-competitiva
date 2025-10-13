#include <bits/stdc++.h>

using namespace std;

int main(){
    //primero encontrar la a;, llega hasta maximo raiz de 3 de 10 a la 12

    long long N = 1'000'000'000'000L;

    unordered_set <int64_t> cont;

    //va llegar maximo raiz de n al cubico
    for(long long i = 1; i * i * i <= N; i++){
        cont.insert(i * i * i);
    }

    int t; cin >> t;

    while(t--){
        int64_t x; cin >> x;

        bool pas = false;
        for(long long i = 1; i * i * i <= x; i++){
            //con que exista un b al cubo igual que el x menos el a al cubo
            if(cont.count(x - i*i*i)){
                pas = true;
                break;
            }
        }

        if(pas){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}