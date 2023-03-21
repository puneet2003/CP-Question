//69A https://codeforces.com/problemset/problem/69/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    int sum =0;
    while(n--)
    {
        int a1,b1,c1;
        cin>>a1>>b1>>c1;
        a+=a1;
        b+=b1;
        c+=c1;
    }
    if(a==0 && b==0 && c==0)
        cout<<"YES";
    else   
        cout<<"NO";
}