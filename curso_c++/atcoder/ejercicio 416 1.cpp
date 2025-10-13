#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;

    string s;
    cin >> s;

    bool valido = true;
    for(int i = l - 1; i < r; i++){  // recorrer desde L hasta R (índices 0-based)
        if(s[i] != 'o'){
            valido = false;
            break;
        }
    }

    if(valido){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}