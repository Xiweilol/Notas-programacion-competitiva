#include <iostream>

using namespace std; 

int main(){
    int t; cin >> t;

    while(t--){
        int k, x; cin >> k >> x;

    
        while(k--){
            
            int temporal = x - 1;
            if(temporal % 3 == 0 && temporal > 0){
                int y = temporal / 3;
                //verificamos que sea impar y luego asignamos
                if(y % 2 == 1){
                    x = y;
                    continue;
                }
            }

            x *= 2;
        }
        cout << x << endl;
    }

    return 0;
}
