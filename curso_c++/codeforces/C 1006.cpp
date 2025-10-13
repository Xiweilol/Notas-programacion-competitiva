#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector <long long> ans;
    vector <long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    long long sum1 = 0,sum3 = 0;
    //mientra no se coincide
    while(l <= r){
        if(sum1 < sum3){
            //mueve mientra suma
            sum1 += arr[l];
            l++;
        } else {
            sum3 += arr[r];
            r--;
        }
        if(sum1 == sum3){
            ans.push_back(sum1);
        }
        
    }

    if(ans.empty()){
        cout << 0 << "\n";
         return 0;
    } 

    long long answ = *max_element(ans.begin(),ans.end());
    
    cout << answ << "\n";
}