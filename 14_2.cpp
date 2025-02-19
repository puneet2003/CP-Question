//https://codeforces.com/contest/118/problem/A
/*Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.

Examples
inputCopy
tour
outputCopy
.t.r
inputCopy
Codeforces
outputCopy
.c.d.f.r.c.s
inputCopy
aBAcAba
output*/

#include<bits/stdc++.h>
using namespace std;
 
int main()
{   
    string s;
    cin>>s;
    string ans = "";
    for(int i:s)
    {
        if(i!='a' && i!='e' && i!='i' && i!='o' && i!='u' && i!='A' && i!='E' && i!='I' && i!='O' && i!='U' && i!='y' && i!='Y')
        {
            ans+='.';
            if(i<97)
            {
                i = i+32;
            }
            ans+=i;
        }   
    }
    cout<<ans;
}