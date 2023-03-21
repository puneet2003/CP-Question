// contest question 852(div 2)
//https://codeforces.com/contest/1793/problem/A
/*The famous store "Second Food" sells groceries only two days a month. And the prices in each of days differ. You wanted to buy n
 kilos of potatoes for a month. You know that on the first day of the month 1
 kilo of potatoes costs a
 coins, and on the second day b
 coins. In "Second Food" you can buy any integer kilograms of potatoes.

Fortunately, "Second Food" has announced a promotion for potatoes, which is valid only on the first day of the month — for each m
 kilos of potatoes you buy, you get 1
 kilo as a gift! In other words, you can get m+1
 kilograms by paying for m
 kilograms.

Find the minimum number of coins that you have to spend to buy at least n
 kilos of potatoes.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤10000
). Description of the test cases follows.

The first line of each test case contains two integers a
 and b
 (1≤a,b≤109)
 — the prices of 1
 kilo of potatoes on the first and second days, respectively.

The second line contains two integers n
 and m
 (1≤n,m≤109)
 — the required amount of potatoes to buy and the amount of potatoes to use the promotion.

Output
For each test case print one integer — the minimum number of coins that you have to pay to buy at least n
 kilos of potatoes.

Example
inputCopy
5
5 4
3 1
5 4
3 2
3 4
3 5
20 15
10 2
1000000000 900000000
1000000000 8
-------------------------
outputCopy
9
10
9
135
888888888900000000
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,m,n;
        cin>>a>>b;
        cin>>n>>m;
        long long int  sum = 0;
        long long int temp = n*b;
        if(n>m){
            int count = n/(m+1);
            sum += a*m*count;
            n-=count*(m+1);
                if(a>b){
                    sum+=n*b;
                }
                else{
                    sum+=n*a;
                }
                if(temp < sum){
                    sum = temp;
                }
        }
        else{
            if(a<b){
                sum = n*a;
            }
            else{
               sum = n*b; 
            }
        }
        cout <<sum<<endl;
    }
}