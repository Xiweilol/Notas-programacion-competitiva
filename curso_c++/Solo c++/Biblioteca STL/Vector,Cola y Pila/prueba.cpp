#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <array>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(){
    int arregloNormal [5] = {412,124,522,521,1111};

    
    // for (int i = 0; i < 5;i++){
    //     cout << arregloNormal[i] << " ";
    // }

    for (int n : arregloNormal){
        cout << n << " ";
    }
    
    return 0;
    
}