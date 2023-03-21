//https://codeforces.com/problemset/problem/282/A
//282A Bit++P



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int y=0;
    while(n>=0){
        string s;
        cin >>s;
        if(s == "++X" || s== "X++"){
            y++;
        }
        if(s == "X--" || s == "--X"){
            y--;
        }
        n--;
    }
    cout <<y;
}