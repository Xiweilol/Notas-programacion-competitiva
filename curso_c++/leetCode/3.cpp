#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int lengthOfLongestSubstring(string s) {
        

        int mx = INT_MIN;
        int actual = 0;

        int l = 0, r = l;
        int len = s.length();
        //contador
        map <char,int> freq;
        //mientra no excede el tamaño de la cadena el puntero derecha
        while(r < len){

            //mientra que sigue existiendo duplicado
            while(freq[s[r]] > 1){
                //eliminando elementos que estan mas a la izquierda
                freq[s[l]]--;
                //decrementar
                actual--;
                //incrementar
                l++;
            }
            //quitar
            freq[s[r]]++;
            actual++;
            mx = max(mx,actual);
            r++;

        }

        return max(mx,actual);

    }
};

int main(){
    Solution p;

    int ans = p.lengthOfLongestSubstring("pwwkew");

    cout << ans << "\n";
}