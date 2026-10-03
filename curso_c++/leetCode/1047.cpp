#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> pila;

        for(int i = 0; i < s.length();i++){
            if(!pila.empty() && s[i] == pila.top()){
                pila.pop();
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

}