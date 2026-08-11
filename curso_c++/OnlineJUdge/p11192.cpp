#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;

    while(cin >> n && n != 0){
        string s; cin >> s;

        string ans = "";

        int cont = 0;
        string temp = "";

        int div = s.length() / n;

        for(int i = 0; i < s.length(); i++){
            temp += s[i];
            cont++;
            if(cont == div){
                reverse(temp.begin(),temp.end());
                ans += temp;
                temp = "";
                cont = 0;
            }
        }

        cout << ans << "\n";
    }
}