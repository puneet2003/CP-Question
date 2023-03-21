// 231-A team
//https://codeforces.com/problemset/problem/231/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int count=0;
    cin >>n;
    int  v[3];
    for(int j=0; j<n; j++){
        int count1 = 0;
        for(int i=0; i<3; i++){
                cin >>v[i];
                if(v[i]==1){
                    count1++;
                }
        }
        if(count1 >= 2){
            count++;
        }
    }
    cout <<count;
}

// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int n;
//     cin >>n;
//     int  v[n][3];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<3; j++){
//             cin >>v[i][j];
//         }
//     }
//     int count=0;
//     int ans=0;
//     for(int i=0; i<n; i++){
//         count = 0;
//         for(int j=0; j<3; j++){
//             count +=v[i][j];
//         }
//         if(count >= 2){
//                 ans++;
//         }
//     }
//     cout <<ans;
// }
