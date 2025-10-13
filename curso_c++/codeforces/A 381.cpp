#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int s = 0,d = 0;

    int l = 0 , r = n-1;

    while(l <= r){
        if(arr[r] > arr[l]){
            s += arr[r];
            r--;
        } else {
            s += arr[l];
            l++;
        }

        if(r < l){
            break;
        }

        if(arr[r] > arr[l]){
            d += arr[r];
            r--;
        } else {
            d += arr[l];
            l++;
        }
    }

    cout << s << " " << d << "\n";

    return 0;
}