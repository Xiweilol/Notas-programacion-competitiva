#include <iostream>
#include <cstdint>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
#include <string>
using namespace std;

typedef struct NODO *nodito;
//parametro por valor
int lol(int x, int y){
   return x + y;
}

struct NODO{
   string miembro;
   int edad;
   float altura;
};


int main(){
   cout << 123 % 5 << "\n";
}
