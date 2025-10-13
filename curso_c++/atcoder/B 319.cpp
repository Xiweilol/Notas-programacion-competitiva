#include <iostream>
#include <string>

using namespace std;

int main(){
    int N; cin >> N;

    string word(N+1,'-');

    for(int i = 0; i <= N; ++i){
        for(int j = 1; j <= 9; ++j){
            //verifica si es divisor la j de n
            if( N % j== 0){
                int result = N/j;
                //verifica si resultado es divisor de i
                if(i % result == 0){
                    // + '0' convierte un numero a char
                    word[i] = j + '0';
                    break;
                } 
            }
        }
    }

    cout << word;
    return 0;
}