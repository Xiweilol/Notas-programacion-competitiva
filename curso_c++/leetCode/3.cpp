#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int lengthOfLongestSubstring(string s) {
        

        int mx = 0;
        int actual = 0;

        int l = 0;
        int len = s.length();
        //contador
        map <char,int> freq;
        //mientra no excede el tamaño de la cadena el puntero derecha
        for(int i = 0; i < len; i++){
            freq[s[i]]++;

            while(freq[s[i]] > 1){
                if(actual > 0) actual--;
                freq[s[l]]--;
                l++;
            }
            actual++;
            mx = max(mx,actual);
        }
        return mx;

    }
};

int main(){
    Solution p;

    int ans = p.lengthOfLongestSubstring("pwwkew");

    cout << ans << "\n";
}