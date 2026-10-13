#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int freq[26] = {};


        for(int i = 0; i < chars.length();i++){
            freq[chars[i] - 'a']++;
        }

        //iteramos al arreglo
        int ans = 0;
        for(int i = 0; i < words.size();i++){
            //por cada palabra, vamos a ir registrando su cantidad
            int freqTemp[26] = {};
            
            for(char c : words[i]){
                freqTemp[c - 'a']++;
               
            }

            bool ok = true;
            for(int k = 0; k < 26; k++){
                if(freqTemp[k] > freq[k]){
                    ok = false;
                    break;
                }
            }

            if(ok) ans += words[i].size();
        }
        return ans;
    }
    
};


int main(){

}