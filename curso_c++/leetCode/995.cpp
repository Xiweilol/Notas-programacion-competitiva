#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        vector <int> diff(nums.size()+1);
        //el numero de volteado que vamos registrando
        int flip_pos = 0;
        //total de volteado que hemos hecho
        int ans =  0;
        for(int i = 0; i < nums.size(); ++i){
            //registrar el numero de volteados en la posicion actual, siempre bay que sumarlo para que funcione 
            flip_pos += diff[i];
            
            //la operacion no fue volteada entonces tenemos que operarla
            if((nums[i] + flip_pos) % 2 == 0){
                if(i + k > nums.size()) return -1;

                ans += 1;
                flip_pos += 1;
                //enlaposcon 
                diff[i+k] -= 1;

            }

            
        }

        return ans;
    }
};

int main(){

}