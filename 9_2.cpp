//https://codeforces.com/problemset/problem/71/A
//71A   way too long words

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin >>s;
        int n = s.size();
        int k;
        int flag = 1;
        if(n <= 10)
        {
            cout << s << endl;
        } 
        else{
            cout << s[0] << n-2 <<s[n-1]<<endl;
        }
    }
    
}