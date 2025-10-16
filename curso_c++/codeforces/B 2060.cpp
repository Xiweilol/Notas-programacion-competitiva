#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;
        map <int,int> mapa;
        bool pas = true;
        for(int i = 0; i < n; i++){

            
            vector <int> arr(m);
            for(int j = 0; j < m; j++){
                cin >> arr[j];
            }
            sort(arr.begin(),arr.end());
        
            for(int x = 1; x < (int)arr.size(); x++){
                if(arr[x] != arr[x-1] + n){
                    pas = false;
                    break;
                }
            }

            

            mapa[arr[0]] = i + 1;

        }
        if(pas){
            for(auto it = mapa.begin(); it != mapa.end();it++){
                cout << it->second << " ";
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
        

    }
    return 0;
}