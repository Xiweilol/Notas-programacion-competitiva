#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;

        int bal = 0;

        int largo = s.size();
        //solo se puede romper la condicion cuando desde principio es negativo
        //porque si quitamos unos del medio, no afecta 

        int pas = true;
        for(int i = 1; i < largo-1;i++){
            if(s[i] == '(') bal++;
            else bal--;

            if(bal < 0) {
                pas = false;
                break;
            }
        }

        if(bal == 0 && pas){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}