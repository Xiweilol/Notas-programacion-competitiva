#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(const string& s) {
        if (s.size() % 2) return false; // si es impar, imposible que cierre bien

        stack<char> cont;
        for (char c : s) {
            // Si es abierto, apilamos
            if (c == '(' || c == '[' || c == '{') {
                cont.push(c);
                continue;
            }

            // Si es cerrado, la pila NO puede estar vacía
            if (cont.empty()) return false;

            char t = cont.top();
            if ((t == '(' && c == ')') ||
                (t == '[' && c == ']') ||
                (t == '{' && c == '}')) {
                cont.pop();
            } else {
                return false; // pareja incorrecta
            }
        }
        return cont.empty(); // válido solo si no sobran abiertos
    }
};


int main(){
    Solution sol1;
    cout << sol1.isValid("()[]{}");
    return 0;
}