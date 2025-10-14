#include <bits/stdc++.h>

using namespace std;

int main(){
    char c; cin >> c;

    string s; cin >> s;

    string s1 = "qwertyuiop",s2 = "asdfghjkl;",s3 ="zxcvbnm,./";


    string ans = "";
    if(c == 'R'){
        for(int i = 0; i < (int)s.size(); i++){
            int l = 0;

            while(l < 10){
                if(s1[l] == s[i]){
                    ans += s1[l-1];
                    break;
                } else if(s2[l] == s[i]){
                    ans += s2[l-1];
                    break;
                } else if(s3[l] == s[i]){
                    ans += s3[l-1];
                    break;
                }
                l++;
            }
        }
    }

    if(c == 'L'){
        for(int i = 0; i < (int)s.size(); i++){
            int l = 0;
            while(l < 10){
                if(s1[l] == s[i]){
                    ans += s1[l+1];
                    break;
                } else if(s2[l] == s[i]){
                    ans += s2[l+1];
                    break;
                } else if(s3[l] == s[i]){
                    ans += s3[l+1];
                    break;
                }
                l++;
            }
        }
    }
    
    cout << ans << "\n";

    return 0;

}