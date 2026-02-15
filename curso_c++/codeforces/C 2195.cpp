// Autor: Mintwi
// Fecha: 2026-02-15
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
            // int n; cin >> n;

            // map <int,int> no = {
            //     {6,1},
            //     {1,6},
            //     {2,5},
            //     {5,2},
            //     {3,4},
            //     {4,3}
            // };
            // vector <int> a(n);

            // for(int i = 0; i < n; i++){
            //     cin >> a[i];
            // }

            // int cnt = 0;
            // for(int i = 1; i < n; i+=2){
            //     if(a[i-1] == no[a[i]] || a[i] == a[i-1]){
            //         cnt++;
            //     }
            // }
            // if(n & 1){
            //     if(a[n-1] == a[n-2] || a[n-2] == no[a[n-1]]){
            //         cnt++;
            //     }
            // }
            // cout << cnt << "\n";
        int n; cin >> n;
        map <int,int> no = {
            {6,1},
            {1,6},
            {2,5},
            {5,2},
            {3,4},
            {4,3}
        };

        int len = 0;
        vector <int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int cnt = 0;
        int temp = a[0];
        for(int i = 1; i < n; i++){
            if(a[i] == no[temp] || a[i] == temp){
                len++;
            } else{
                cnt += (len+1) / 2;
                len = 0;
            }

            temp  = a[i];
        }

        cnt+= (len + 1) / 2;
        cout << cnt << "\n";


    }

    return 0;
}