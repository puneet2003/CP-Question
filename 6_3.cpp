  //  https://codeforces.com/problemset/problem/32/B

    #include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    
    int a=0;
    int b=0;
    for(int i=0; i<s.size(); i++)
    {   
        if(s[i]=='.' && a==0)
        {
            cout<<0;
        }
        if(s[i]=='-' && a==1)
        {
            cout<<2;
            a=0;
        }
        else if(s[i]=='.' && a==1)
        {
            cout<<1;
            a=0;
        }
        else if(s[i]=='-')
        {
            a=1;
        }
 
 
    }
}