#include<bits/stdc++.h>
using namespace std;
bool detect_capital(string word)
{
int n=word.size();
if('A'<=word[0]&&word[0]<='Z')
{
if('A'<=word[1]&&word[1]<='Z')
{
for(int i=2;i<n;i++)
{
if('A'<=word[i]&&word[i]<='Z')
{}
else
{return false;}
}
}
else{
for(int i=2;i<n;i++)
{
if('a'<=word[i]&&word[i]<='z')
{}
else
{return false;}
}
}
}
else
{
for(int i=1;i<n;i++)
{
if('a'<=word[i]&&word[i]<='z')
{}
else
{return false;}
}
}
return true;
} 
int main()
{
string word="flaG";
int m=detect_capital(word);
cout<<m;
return 0;
}