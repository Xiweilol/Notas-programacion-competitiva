// Autor: Mintwi
// Fecha: 2026-10-29
// No puedo con rate 1000 :( 
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack <pair<char,int>> pila;

        for(int i = 0; i < s.length();i++){
            //si no esta vacia y le quiero meter elemento

            //si no tenemos que checar el nuevo elemento con el top, para ver si le aumentamos uno o no
            if(!pila.empty() && pila.top().first == s[i]){
                pila.top().second++;
                if(pila.top().second >= k){
                    pila.pop();
                    continue;
                }
            }
            //si no significa que es un nuevo elemento y que puedes meter asi nada mas con uno
            pila.push({s[i],1});
        }

        string ans = "";

        while(!pila.empty()){
            char c = pila.top().first;
            int cnt = pila.top().second;
            for(int i = 0; i < cnt; i++){
                ans += c;
            }

            pila.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};