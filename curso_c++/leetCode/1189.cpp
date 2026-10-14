#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int maxNumberOfBalloons(string text) {
        string fin = "ballon";

        bool ok = true;
        int ans = 0;
        map <char,int> freq;

        for(int i = 0; i < text.length();i++){
            freq[text[i]]++;
        }
        while(ok){
            int cont = 0;
            for(int i = 0; i < fin.length();i++){
                freq[fin[i]]--;
                cont++;
                if(fin[i] != 'n' && freq[fin[i]] <= 0){
                    ok = false;
                    break;
                }
            }
            if(ok && cont == fin.length()) ans++;
        }

        return ans;


    }
};
