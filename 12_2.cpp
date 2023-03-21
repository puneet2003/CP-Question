//beautiful matrix   263A
//https://codeforces.com/problemset/problem/263/A



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[5][5];
    int k;
    int l;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >>A[i][j];
            if(A[i][j]==1){
                k=i;
                l=j;
            }
        }
    }
    int total;
    total= ( abs(k-2) + abs(l-2) );
    cout <<total;
}