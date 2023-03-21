//https://codeforces.com/problemset/problem/467/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        p+=2;
        if(p<=q)
            count++;
    }
    cout<<count;
}