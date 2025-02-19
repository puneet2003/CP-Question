//1793
//contest div2 #852
//https://codeforces.com/contest/1793/problem/B
/*For his birthday recently Fedya was given an array a
 of n
 integers arranged in a circle, For each pair of neighboring numbers (a1
 and a2
, a2
 and a3
, …
, an−1
 and an
, an
 and a1
) the absolute difference between them is equal to 1
.

Let's call a local maximum an element, which is greater than both of its neighboring elements. Also call a local minimum an element, which is less than both of its neighboring elements. Note, that elements a1
 and an
 are neighboring elements.

Unfortunately, Fedya lost an array, but he remembered in it the sum of local maximums x
 and the sum of local minimums y
.

Given x
 and y
, help Fedya find any matching array of minimum length.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤1000
). Description of the test cases follows.

Each line of each test case contain two integers x
 and y
 (−109≤y<x≤109
) — the sum of local maximums and the sum of local minimums, respectively.

Output
For each test case, in the first line print one integer n
 — the minimum length of matching arrays.

In the second line print n
 integers a1,a2,…,an
 (−109⩽ai⩽109
) — the array elements such that the the absolute difference between each pair of neighboring is equal to 1
.

If there are multiple solutions, print any of them.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Example
inputCopy
4
3 -2
4 -4
2 -1
5 -3
outputCopy
10
0 1 2 1 0 -1 0 -1 0 1
16
-2 -1 -2 -1 0 1 2 3 4 5 4 3 2 1 0 -1 
6
1 0 -1 0 1 0
16
2 3 2 1 0 -1 0 -1 0 -1 0 1 2 1 0 1
Note
In the first test case, the local maximums are the numbers at 3,7
 and 10
 positions, and the local minimums are the numbers at 1,6
 and 8
 positions. x=a3+a7+a10=2+0+1=3
, y=a1+a6+a8=0+(−1)+(−1)=−2
.

In the second test case, the local maximums are the numbers at 2
 and 10
 positions, and the local minimums are the numbers at 1
 and 3
 positions. x=a2+a10=−1+5=4
, y=a1+a3=−2+(−2)=−4
.

In the third test case, the local maximums are the numbers at 1
 and 5
 positions, and the local minimums are the numbers at 3
 and 6
 positions
*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int n= 2*(abs(x-y));
        cout <<n<<endl;
        int c1=x;
        int c2=y;
        for(int i=0; i<n; i++){
            if(c1>y){
                cout<<c1<<" ";
                c1--;
            }
            else if(c2<x){
                cout<<c2<<" ";
                c2++;
            }
        }
        cout<<endl;
    }
}