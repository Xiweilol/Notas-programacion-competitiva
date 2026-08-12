#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int N;

    while(cin >> N && N != 0){
vector <int> arr(N+2);
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }

    arr[0] = arr[N];
    arr[N+1] = arr[1];
    int ans = 0;
    
    for(int i = 1; i <= N;i++){
        int prev = arr[i-1];
        int mid = arr[i];
        int next = arr[i+1];
        if((mid < prev && mid < next) || (mid > prev && mid > next)){
            ans++;
        }
    }
    cout << ans << "\n";

    }

    

}