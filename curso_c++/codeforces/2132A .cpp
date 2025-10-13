#include <iostream>
#include <string>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
    int n; cin >> n;
    string a; cin >> a;
    int m; cin >> m;
    string b; cin >> b;
    string c; cin >> c;

    for(int i = 0; i < (int)c.size(); i++){
        if(c[i] == 'D'){
            a += b[i];
        } else {
            a.insert(0,1,b[i]);
        }
    }

    cout << a << endl;;
    
    }

    return 0;

}
