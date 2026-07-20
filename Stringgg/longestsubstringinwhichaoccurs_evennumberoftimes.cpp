#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="abacaa";
int mask=0;
unordered_map<int,int>mpp;
mpp[0]=-1;
int i;
int n=s.length();
int max_len=INT_MIN;
for(i=0;i<n;i++)
{
if(s[i]=='a'){
mask^=1;
}
if(mpp.find(mask)==mpp.end()){
mpp[mask]=i;
}
else
{
max_len=max(max_len,i-mpp[mask]);
}
}
cout<<max_len;
return 0;
}