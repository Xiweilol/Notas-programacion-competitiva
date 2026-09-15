#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int has[256] = {0};

        for(int i = 0; i < allowed.size();i++){
            has[allowed[i]] = 1;
        }

        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            bool ok = true;
            for(int j = 0; j < words[i].size();j++){
                
                if(has[words[i][j]] == 0){
                    ok = false;
                    break;
                }
            }

            if(ok) ans++;
        }

        return ans;
    }
};

int main(){

}
