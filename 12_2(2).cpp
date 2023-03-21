//112A   A. Petya and Strings
//https://codeforces.com/problemset/problem/112/A


#include<bits/stdc++.h>
using namespace std;
int check(char a){
    if(a < 97){
        return a+32;
    }   
    else{
        return a;
    }
}
int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int flag = 1;
    for(int i=0; i<s1.size(); i++){
        s1[i] = check(s1[i]);
        s2[i] = check(s2[i]);
    }
    if(s1 == s2){
        cout <<0<<endl;
    }
    else{
        if(s1>s2){
            cout <<1<<endl;
        }
        else{
            cout <<-1<<endl;
        }
    }
    
}