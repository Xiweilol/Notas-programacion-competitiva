#include <bits/stdc++.h>

using namespace std;


bool negative(int n){
    return (n < 0);
}

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        vector <long long> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        long long negativos = count_if(arr.begin(),arr.end(),negative);

        int acmnegativos = 0;
        for(auto& n : arr){
            if (negative(n) ){
                acmnegativos++;
                if(acmnegativos > 1){
                    negativos --;
                }
            } else if(!negative(n) && n != 0){
                acmnegativos = 0;
            }

        }

        long long sum = accumulate(arr.begin(),arr.end(),0LL,[](long long acumulado,long long actual){
                                                                return acumulado + llabs(actual);
                                                            });
        cout << sum << " " << negativos << "\n";                                                    
    }
}