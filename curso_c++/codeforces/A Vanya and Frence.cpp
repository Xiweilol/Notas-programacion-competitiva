#include <iostream>

using namespace std;

int main(){
    int n,h; cin >> n >> h;

    int cont = 0;
    for(int i = 0; i < n; ++i){
        int a; cin >> a;

        if(a > h){
            cont += 2;
        } else {
            cont++;
        }
    }

    cout << cont;
}