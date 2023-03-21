https://codeforces.com/problemset/problem/705/A


#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        (i%2==0) ? cout<<"I love " : cout<<"I hate ";
        cout<<"that ";
    }
    (n%2==0) ? cout<<"I love it" : cout<<"I hate it";
 
}