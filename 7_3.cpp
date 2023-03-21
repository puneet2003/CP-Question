//https://codeforces.com/problemset/problem/1367/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<s[0];
        for(int i=1; i<s.size()-1; i+=2)
        {
            cout<<s[i];
        }
        cout<<s[s.size()-1];
        cout<<endl;
    }
}