#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int N;
    while(cin >> N && N != 0){
        vector <string>  cartas(N);

        vector <string> palabra(N);

        for(int i = 0; i < N; i++){
            cin >> cartas[i] >> palabra[i];
        }

        vector <string> ans(N,"");
        int pos = 0;
        for(int i = 0; i < N; i++){

            int cnt = 0;
            //iterar la palabra, cnt para contar las posiciones validas
            while(cnt < palabra[i].size()){
                //avanzar el cnt solo si esta vacio el lugar
                if(ans[pos].empty()){
                    cnt++;
                }

                //si ya el contador esta en la posicion y que este vacio
                if(cnt == palabra[i].size() && ans[pos].empty()){
                    ans[pos] = cartas[i];
                    pos = (pos + 1) % N;
                    break;
                }

                //Si no, simplemente avanzamos al pos

                pos = (pos + 1) % N;

            }
        }

        for(int i = 0; i < N; i++){
            if (i) cout << " ";
            cout << ans[i];
        }

        cout << "\n";
    }
}