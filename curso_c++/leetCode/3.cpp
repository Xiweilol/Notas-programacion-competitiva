#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int lengthOfLongestSubstring(string s) {
        //aplicamos el sliding window
        int l = 0, r = l + 1;
        int len = s.length();
        int mx = INT_MIN;

        //necesitamos crear una tabla hash para almacenar los numeros que van apareciendo en la ventana
        map <int,int> freq;

        freq[s[l]]++;
        //mientra sea menor que el tamaño de la cadena que nos de
        while(r < len){
            // si en la map ya lo conto al menos una vez, significa que este no puede sers
            if(freq[r] > 0){

            }
        }

    }
};

int main(){

}