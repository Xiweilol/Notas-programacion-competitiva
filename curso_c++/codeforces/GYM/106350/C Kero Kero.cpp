// Autor: Mintwi
// Fecha: 2026-02-08

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,K; cin >> N >> K;

    vector <int> A(N);

    for(int i = 0; i < N; i++){
        int ai; cin >> ai;

        if(ai < 0){
            ai = ((ai % K) +K) % K;
        } else{
            ai %= K;
        }

        A[i] = ai;
    }

    sort(A.begin(),A.end());

    ll total = accumulate(A.begin(),A.end(),0LL);
    ll sum = 0;
    for(int i = N-1; i >= 0; i-=2){
        sum += A[i];
    }

    if(total - sum >= sum){
        cout << "NO\n";
    } else{
        cout << "YES\n";
    }



    return 0;
}