#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int n; cin >> n;


    vector <ll> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    ll cntneg = 0;

    ll ans = 0;

    bool cero = false;
    for(int i = 0; i < n; i++){
        if(a[i] <= -1){
            ans += abs(-a[i]-1);
            cntneg++;
        } else if(a[i] > 1){
            ans += abs(a[i]-1);
        } else if(a[i] == 0){
            ans++;
            cero = true;
        }
    }

    if((cntneg & 1) && cero){
        cout << ans << "\n";
    } else if((cntneg & 1) && !cero){
        cout << ans +2 << "\n";
    } else {
        cout << ans << "\n";
    }
}