#include <iostream>
#include <vector>

using namespace std;
/*
Cuando se aplican de ceros, siempre son 10 elevado al algo, ya que esos se comportan los ceros
siempre hay que sacar formula matematica para el problema uwu
*/
int main(){
    int t; 
    cin >> t;

    while(t--){
        long long n; cin >> n;

        unsigned long long p10 = 1;

        vector<unsigned long long> arr;
        for(int k = 1; k <= 17;k++ ){
            p10 *= 10; //elevamos al k;

            unsigned long long denom = p10 + 1;
            if(n % denom == 0){
                arr.push_back(n/denom);
            }   
        }

        if(arr.empty()){
            cout << 0 << '\n';
        } else {
            cout << arr.size() << '\n';
            for(int i =(int)arr.size() - 1; i >= 0; --i){
                        cout << arr[i] << (i ? ' ': '\n');
            }            
        }
        
    }
    return 0;

}