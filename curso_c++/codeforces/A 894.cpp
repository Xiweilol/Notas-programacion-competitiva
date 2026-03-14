#include <bits/stdc++.h>

using namespace std;

int main(){
    string n; cin >> n;

    int len = n.size();
    int cnt = 0;
    for(int i = 0; i < len; ++i){
        if(n[i] == 'Q'){
            for(int j = i + 1; j < len; j++){
                if(n[j] == 'A'){
                    for(int k = j + 1; k < len; k++){
                        if(n[k] == 'Q'){
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    cout << cnt << "\n";
}