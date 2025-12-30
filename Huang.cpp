#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    string s = "1101010010011011100";

    int n = count(s.begin(),s.end(),'1');

    cout << n << "\n;";
}
