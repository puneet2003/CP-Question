//96A  https://codeforces.com/problemset/problem/96/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count0=0;
    int count1=0;
    int flag=1;
    for(auto i:s)
    {
        if(i=='1')
        {
            count1++;
            count0=0;
        }
        else
        {
            count0++;
            count1=0;
        }
        if(count1>=7 || count0>=7)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}