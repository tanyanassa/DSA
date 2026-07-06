#include<bits/stdc++.h>
using namespace std;
int main()
{
string word;
word="ab-cd";
string ans;
int n=word.size();
int i;
for(i=0;i<n;i++)
{
if('a'<=word[i]&&word[i]<='z' ||('A'<=word[i]&&word[i]<='Z'))
{
ans+=word[i];
}
}
for(int i=0;i<n;i++)
{
if('a'<=word[i]&&word[i]<='z' ||('A'<=word[i]&&word[i]<='Z'))
{
int n1=ans.size();
word[i]=ans[n1-1];ans.pop_back();
}
}
cout<<word;
return 0;
}