#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="abacb";
int k=2;
int n=s.length();
int i;
int j;
int count1=0;
for(i=0;i<n;i++){
unordered_map<int,int>mpp;
int count=0;
for(j=i;j<n;j++)
{
mpp[s[j]]++;
++count;
if(mpp[s[j]]>=k)
{
count1=count1+(n-i)-count+1;
break;
}
}
}
cout<<count1;
return 0;
}