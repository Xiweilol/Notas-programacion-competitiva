#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int countAsterisks(string s) {
      int cnt = 0;
      int ans = 0;
      
      for(int i = 0; i < s.size();i++){
        
        if(s[i] == '|') cnt ++;
        if(cnt & 1) continue;
        if(s[i] == '*') ans++;
      }

      return ans;
    }
};
int main(){
    
}