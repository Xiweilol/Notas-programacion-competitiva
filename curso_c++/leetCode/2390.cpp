#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack <char> pila;

        //iteramos la cadena
        for(int i = 0; i < s.length();i++){
            //si no es un asterisco, la metemos a la pila
            if(s[i] == '*'){
                if(!pila.empty()){
                    pila.pop();
                }
            } else{
                pila.push(s[i]);
            }
        }
        string ans = "";
        while(!pila.empty()){
            ans += pila.top();
            pila.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    Solution p;

    string lol = p.removeStars("leet**cod*e");

    cout << lol << "\n";
}