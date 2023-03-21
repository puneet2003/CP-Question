//https://codeforces.com/problemset/problem/1804/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<abs(a)+abs(b)<<endl;
            // continue;
        }
        else
        {
            int sum = abs(a)+abs(b)+abs(abs(a)-abs(b))-1;
            cout<<sum<<endl;
        }
    }
}