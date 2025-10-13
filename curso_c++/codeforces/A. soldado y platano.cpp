#include <iostream>

using namespace std;

int main(){

    int k; cin >> k;
    long long n ; cin >> n;
    int w; cin >> w;
    
    
    long long sum = 0;
    for(int i = 1; i <= w; ++i){
        sum += i * k;
    }
    if(n >= sum){
        cout << 0;
        return 0;
    }
    long long result = sum - n;
    cout << result;
    return 0;
}