#include <iostream>

using namespace std;


int main(){
    long long n; cin >> n;


    int cont = 0;
    while(n > 0){
        int temp = n % 10;

        if(temp == 7 || temp == 4){
            cont++;
        }

        n /= 10;
    }

    if(cont == 4 || cont == 7 ){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}