//791 A
//https://codeforces.com/problemset/problem/791/A
/*Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

Input
The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.

Output
Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

Examples
inputCopy
4 7
outputCopy
2
inputCopy
4 9
outputCopy
3
inputCopy
1 1
outputCopy
1
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count  = 0;
    if(a==b)
    {
        cout<<1;
    }
    else
    {
        while(a<=b)
        {
            a*=3;
            b*=2;
            count++;
        }
        cout<<count;
    }
}