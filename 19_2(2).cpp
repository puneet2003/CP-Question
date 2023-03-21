//https://codeforces.com/problemset/problem/58/A



#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string temp = "hello";
    string m = "";
    int j=0;
    for(int i:s)
    {
        if(i == temp[j])
        {
            j++;
            m+=i;
        }
    }
    if(m == temp)
        cout<<"YES";
    else
        cout<<"NO";
}