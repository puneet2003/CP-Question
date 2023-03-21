//https://codeforces.com/problemset/problem/41/A



#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;

    reverse(t.begin(),t.end());
    if(t==s)
        cout<<"YES";
    else   
        cout<<"NO";
}