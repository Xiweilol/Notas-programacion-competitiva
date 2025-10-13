#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int suma_x = 0;
    int suma_y = 0;
    int suma_z = 0;

    for (int i = 0; i < n;++i){
        int x,y,z = 0;
        cin >> x >> y >> z;

        suma_x += x;
        suma_y += y;
        suma_z += z;
    }
   
    if(suma_x == 0 && suma_y == 0 &&  suma_z == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}