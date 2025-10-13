#include <iostream>

using namespace std;

int main(){
    int n,l,r; cin >> n >> l >> r;

    int cont = 0;
    for(int i = 0; i < n; ++i){
        int x, y; cin >> x >> y;

        if( x <= l && y >=r){
            cont++;
        }
    }

    cout << cont;
    return 0;
}