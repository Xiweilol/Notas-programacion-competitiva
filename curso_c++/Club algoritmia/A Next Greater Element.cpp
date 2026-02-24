// Autor: Mintwi
// Fecha: 2026-02-24
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int N; cin >> N;

        vector <int> A(N+1);

        for(int i = 1; i <= N; i++){
            cin >> A[i];
        }

        stack <pair<int,int>> LOL;
        vector <int> ans(N+1);
        for(int i = N; i > 0; i--){

            while(!LOL.empty() && LOL.top().first <= A[i]){
                LOL.pop();
            }

            
            if(LOL.empty()){
                ans[i] = N + 1;
            } else {
                ans[i] = LOL.top().second;
            }
            LOL.push({A[i],i});
            
        }

        for(int i = 1; i <= N; i++){
            cout << ans[i] << " ";
        }

        cout << "\n";
    

    return 0;
}