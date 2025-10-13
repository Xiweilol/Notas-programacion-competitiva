#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n; 
    if (!(cin >> n)) return 0;

    vector<string> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Ojo: si hubiera espacios usa getline
    }

    string result = "";

    if (arr.empty()) {       // caso borde: n == 0
        cout << result;
        return 0;
    }

    result = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        // mientras 'result' NO sea prefijo de arr[i], recorta una letra
        while (arr[i].rfind(result, 0) != 0) { // rfind con pos=0 => "starts with"
            if (result.empty()) break;
            result.pop_back();  // equivalente a substr(0, len-1) pero más claro
        }
        if (result.empty()) break; // ya no hay prefijo común, salimos
    }

    cout << result;
    return 0;
}

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        //obtenemos el primer valor
        string prefijo = strs[0];
        //iteramos apartir del segundo elemento ya que el primero ya esta
        for( int i = 1; i< strs.size();++i){
            //si no encuentra ningun coincidencia entra aqui
            while (strs[i].find(prefijo) != 0){
                //prefijo quitando la ultima caracter utilizando sbstr
                prefijo = prefijo.substr(0,prefijo.length() - 1);

                if(prefijo.empty()){return prefijo;}
            }
        }
        return prefijo;
    }
};