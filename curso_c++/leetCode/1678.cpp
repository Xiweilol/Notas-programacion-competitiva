#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string interpret(string command) {

        string ans = "";
        for(int i = 0; i < command.size();i++){

            //si es apertura, tenemos que checar una posicion despues de el
            if(command[i] == '('){
                if(command[i+1] == ')'){
                    ans += 'o';
                } else{
                    ans += "al";
                }

                continue;
            }

            ans += command[i];
        }

        return ans;
    }
};

int main(){

}