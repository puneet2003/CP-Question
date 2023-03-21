//https://codeforces.com/problemset/problem/677/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>h){
            sum+=2;
        }
        else{
            sum++;
        }
    }
    cout<<sum;

}