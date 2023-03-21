//https://codeforces.com/problemset/problem/271/A



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    while(true)
    {
        y+=1;
        int l = y%1000;
        int a = y/1000;
        int b = (l)/100;
        int c = (l%100)/10;
        int d = l%10;
        if(a != b && b!=c && c!=d && a!=d && d!=b && a!=c)
        break;
    }
    cout<<y;
}



//----------------------------------------------------------------------------------

// bool check(int n)
// {
//     vector<int> v;
//     set<int> st;
//     int a;
//     while(n>0)
//     {
//         a = n%10;
//         v.emplace_back(a);
//         st.insert(a);
//         n/=10;
//     }
//     if(st.size() == v.size())
//         return 1;
//     else 
//         return 0;    
// }

// int main()
// {
//     int y;
//     cin>>y;
//       int sum = 0;
//     sum = y + 1;
  
//     while(check(sum) == 0)
//     {   

//         sum = sum +1;
//     }
//     cout<<sum;
// }