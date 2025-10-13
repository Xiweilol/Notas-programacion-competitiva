#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector <int> p(n),q(n);

        for(int i = 0; i < n; ++i) cin >> p[i];

        for(int i = 0; i < n; ++i){
            //aseguramos que la suma sea mayor que n y n+ 1;
            int temporal = n - p[i] + 1;
            q[i]  = temporal;
        }

        for(auto& i : q){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}