// Autor: Mintwi
// Fecha: 2025-12-22

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    int K; cin >> K;

    vector <int> h(N);

    for(int i = 0; i < N; i++){
        cin >> h[i];
    }

    vector <ll> dp(N,1e9+7);

    dp[0] = 0;
    for(int i = 0; i < N; i++){
        for(int j = 1; j <= K; j++){
            //rompe cuando sea salto hacia un lugar que no existe 
            if(i + j < N){
                dp[i+j] = min(dp[i+j], dp[i] + abs(h[i] - h[i+j]));
            } else {
                break;
            }

            
        }
    }

    cout << dp[N-1] << "\n";
    return 0;
}