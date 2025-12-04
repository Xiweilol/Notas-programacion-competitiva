// Autor: Mintwi
// Fecha: 2025-12-04

#include <bits/stdc++.h>
using namespace std;

int step(int n,vector <int>& h, vector <int>& dp){

    if(dp[n] != -1) return dp[n];

    if(n == 0){
        return 0;
    }

    if(n == 1){
        return abs(h[n] - h[n-1]);
    }

    return dp[n] = min(step(n-1,h,dp) + abs(h[n] - h[n-1]), step(n-2,h,dp) + abs(h[n] - h[n-2]));
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;

    vector <int> h(N);

    vector <int> dp(N,-1);

    for(int i = 0; i < N; i++){
        cin >> h[i];
    }

    cout << step(N-1,h,dp) << "\n";

    return 0;
}