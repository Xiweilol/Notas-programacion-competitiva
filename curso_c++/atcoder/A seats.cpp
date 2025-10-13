#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    if(n < 3){
        cout << 0;
        return 0;
    }
    string s; cin >> s;

    int cont = 0;
    int temp = 0;
    for(int i = 0; i < n; i++){
        if(i == n - 2){
            temp = i;
            break;
        }
        if(s[i] == '#' && s[i + 1] == '.' && s[i + 2]=='#'){
            cont++;
        }
    }
    cout << cont + (s[temp] == '#' && s[temp + 1] == '.' && s[temp+2]=='#');

}