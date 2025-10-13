#include <iostream>

using namespace std;

int main(){
    int m,n; cin >> m >> n;

    int sum = m * n;
    if (sum < 2){
        cout << 0;
        return 0;
    }
    int domino;
    for(int i = 0; i < sum; ++i){
        
        if(domino >= sum){
            if(sum % 2 == 0){
                domino = i;
            } else { 
                domino = i - 1;
            }
            
            break;
        }
        domino += 2;
    }

    cout << domino;
}