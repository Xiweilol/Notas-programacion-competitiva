#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k; cin >> n >> k;

    vector <int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector <long long> prefix(n);

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    long long suma = prefix[k-1];

    int indice = 1;
    for(int i = k; i < n; i++){
        long long temp = prefix[i] - prefix[i - k];

        if(temp < suma){
            suma = temp;
            //convierte el indice a que empece con base 1, el -k+1, esta en base 0, por eso + 2
            indice = i - k + 2;
        }
    }

    cout << indice << "\n";

    return 0;
}