#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t; cin >> t ;

    while(t--){
        int n; cin >> n;

        vector <ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = 0;
        
        ll mxGlobal = a[n-1];
        for(int i = n-1; i >= 0; i--){
            ll firstOne = a[i];
            for(int j = 0; j < i; j++){
                ll secondOne = a[j];

                int l = 0, r = n - 1;

                while(l <= r){
                    int mid = l + r / 2;
                    ll mx = LLONG_MIN;
                    mx = max({firstOne,secondOne,a[mid]});
                    ll sum = firstOne + secondOne + a[mid];

                    //considerar diferentes para el caso de sum de los3  > mxglobal y el suma de los 2 repasa al mas grande 
                    if((mid != i && mid != j) && sum > mxGlobal && sum - mx > mx){

                    }
                }
            }


        }
    }
}