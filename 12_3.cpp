//https://codeforces.com/problemset/problem/451/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int temp = n*m;
    int flag=0;
    while(n>0 && m>0)
    {
        if(flag==0){
            flag=1;
            n--;
            m--;
        }
        else if(flag==1)
        {
            flag=0;
            n--;
            m--;
        }
    }
        if(flag==1)
        {
            cout<<"Akshat";
        }
        else
        {
            cout<<"Malvika";
        }
}