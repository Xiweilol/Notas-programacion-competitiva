// Autor: Mintwi
// Fecha: 2025-12-04

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int f(int i, vector <int>& h, vector <int>& dp){
    if(dp[i] != -1) return dp[i];
    if(i == 0) return 0;
    if(i == 1) return abs(h[i] - h[i-1]);


    return dp[i] = min(f(i-1,h,dp) + abs(h[i] - h[i-1]), f(i-2,h,dp) + abs(h[i] - h[i-2]));

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
    cout << f(N-1,h,dp) <<  "\n";
    return 0;
}