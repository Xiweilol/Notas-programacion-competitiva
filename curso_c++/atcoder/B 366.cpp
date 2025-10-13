#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;

    vector <string> arr(n);

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
    }

    int M  = 0;
    //max es la libreria estandar de algorithm que compara dos numeros y devuelve el mayor
    for(auto& s :arr) M = max(M,(int)s.size());
    //aqui con el maayor longitud encontrado, creas un nuevo array lleno de * y de tamañano de n en este caso
    vector <string> T(M,string(n,'*'));

    //recorre el primer array creado
    for(int i = 0; i < n; ++i){
        //recorre cada letra de una palabra del primer array, tamaño del string ya que, en caso de que falta, no le modifique el * preexistente, fuck
        for(int j = 0; j < (int)arr[i].size(); ++j){
            //truco para rotar  la columna, n - i - 1, la primera palabra va en ultima columna y asi
            T[j][n - i - 1] = arr[i][j];
        }
    }

    for( int i = 0; i < M; ++i){
        while(T[i].back() == '*'){
            T[i].pop_back();
    }

    cout << T[i] << endl;
    
}
return 0;
}