//281A
//https://codeforces.com/problemset/problem/281/A

/*Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
inputCopy
        ApPLe
outputCopy
        ApPLe
inputCopy
        konjac
outputCopy
        Konjac

*/

#include<bits/stdc++.h>
using namespace std;

char change(char ch){
    if(ch<97){
        return ch;
    }
    else{
        return (ch-32);
    }
}

int main()
{
    string s;
    cin>>s;
    s[0]=change(s[0]);
    cout<<s;

}