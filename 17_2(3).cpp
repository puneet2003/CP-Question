//59A   https://codeforces.com/problemset/problem/59/A


#include<bits/stdc++.h>
using namespace std;

bool count(string s)
{
    int up=0;
    int low =0;
    for(auto i:s)
    {
        if(i<97){
            up++;
        }
        else{
            low++;
        }
    }
    if(low<up){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string s;
    cin>>s;
    // count(s);
    if(count(s))
    {
        for(auto i:s)
        {
            if(i<97)
            {
                cout<<i;
            }
            else{
                char x = (i-32);
                cout<<x;
            }
        }
    }
    else
    {
        for(auto i:s)
        {
            if(i<97)
            {
                char x = i+32;
                cout<<x;
            }
            else
            {
                cout<<i;
            }
        }
    }
}
