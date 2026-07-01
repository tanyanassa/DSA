#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="leetcode";
int k=3;
int n=s.length();
unordered_map<char,int>mpp;
int i;
int count=0;
int mcount=0;
for(i=0;i<k;i++)
{
mpp[s[i]]++;
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
count=count+1;
}
mcount=max(mcount,count);
for(i=k;i<n;i++)
{
mpp[s[i]]++;
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
count=count+1;
mpp[s[i-k]]--;
if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
count=count-1;
mcount=max(mcount,count);
}
cout<<mcount;
return 0;
}