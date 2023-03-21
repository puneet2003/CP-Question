//https://codeforces.com/problemset/problem/1343/B


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int even_sum,odd_sum;
            even_sum = (n/2)*(n/2+1);
            odd_sum = (n/2-1)*(n/2-1);
            cout<<"YES"<<endl;
            int even = 0;
            for(int i=0; i<n/2; i++)
            {
                even+=2;
                cout<<even<<" ";   
                    
            }
            int odd = -1;
            for(int i=0; i<n/2-1; i++)
            {
                     odd+=2;
                    cout<<odd<<" ";
            }
            cout<<even_sum-odd_sum<<endl;

        }
    }
}