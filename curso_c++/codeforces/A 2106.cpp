//Mejora
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        int ans = 0;
        for(auto c : s){
            if(c == '0') ans ++;
            else ans += n - 1;
        }

        cout << ans << "\n";
    }
    return 0;
}


// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int t; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         string s; cin >> s;

//         string ans = "";

//         string temp = s;
//         for(int i = 0; i < n; i++){
//             if(s[i] == '1'){
//                 s[i] = '0';
//                 ans  +=  s;
//             } else{
//                 s[i] = '1';
//                 ans += s;
//             }
//             s = temp;
//         }

//         int cnt = 0;

//         for(char& c : ans){
//             if(c == '1'){
//                 cnt++;
//             }
//         }

//         cout << cnt << "\n";
//     }

//     return 0;
// }