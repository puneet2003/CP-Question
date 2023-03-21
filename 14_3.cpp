//https://codeforces.com/problemset/problem/141/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    map<char,int> mp1;
    map<char,int> mp2;
    for(auto i:s1)
    {
        mp1[i]++;
    }
    for(auto i:s2)
    {
        mp1[i]++;
    }
    for(auto i:s3)
    {
        mp2[i]++;
    }
    int flag=1;
    if(mp1 == mp2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

}