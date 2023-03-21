//https://codeforces.com/problemset/problem/1030/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int f=1;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            f = 0;
        }
    }
    if(f==0)
        cout<<"HARD";
    else 
        cout<<"EASY";

}