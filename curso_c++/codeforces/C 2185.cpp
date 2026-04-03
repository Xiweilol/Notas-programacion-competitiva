#include<bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
     int t; cin >> t;

     while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];

        set <int> s(a.begin(),a.end());

        ll temp = LONG_LONG_MAX;
        int len = 0;
        int ans = 0;
        for(int num : s){
            //cout << num << " ";
            if(num != temp + 1){
                len = 0;
            }
            len++;
            temp = num;
            ans = max(ans,len);
        }

        cout << ans << "\n";
     }
}