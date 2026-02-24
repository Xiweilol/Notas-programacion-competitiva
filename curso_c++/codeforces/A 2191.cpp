#include <bits/stdc++.h>
typedef long long ll;


using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        set <int> red;
        set <int> blue;

        for(int i = 0; i < n; i+= 2){
            red.insert(a[i]);
        }

        for(int i = 1; i < n; i+= 2){
            blue.insert(a[i]);
        }

        sort(a.begin(),a.end());

        bool swichRed = false;
        bool swichBlue = false;

        bool ok = true;
        for(int i = 0; i < n; i++){

            if((swichRed && red.count(a[i])) || (swichBlue && blue.count(a[i]))){
                ok = false;
                break;
            }
            if(red.count(a[i])){
                swichRed = true;
                swichBlue = false;
            } else {
                swichBlue = true;
                swichRed = false;
            }
        }
        

        cout << (ok ? "YES" : "NO") << "\n";
    }



}