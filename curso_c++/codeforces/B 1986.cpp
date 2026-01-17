/*
Equipo chat me lo dijo
*/
#include <bits/stdc++.h>
using namespace std;
#define X '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define dbg(x) cerr << #x << '=' << x << X
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool valid(int i, int j,int n,int m){
    return i >=0 && i<n && j>=0 && j<m;
}
int main(){
    fast_io;
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,m;
        cin >> n >> m;
        vector<vector<int>> matrix(n,vector<int>(m));
        for (auto i = 0; i < n; i++)
        {
            for (auto j = 0; j < m; j++)
            {
                cin  >> matrix[i][j];
            } 
        }
        for (auto i = 0; i < n; i++){
            for (auto j = 0; j < m; j++){
                int mx=INT_MIN;/*con esto sacaremos el valor de vecino maximo*/
                for (auto z = 0; z < 4; z++){
                    if (valid(i+dx[z],j+dy[z],n,m)) mx=max(mx,matrix[i+dx[z]][j+dy[z]]); 
                }
                if (mx<=matrix[i][j]) matrix[i][j]=mx; 
            } 
        }
        for (auto i = 0; i < n; i++)
        {
            for (auto j = 0; j < m; j++)
            {
                cout << matrix[i][j] << ' ';
            } 
            cout << X;
        }


    }

    return 0;
}