#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string>words={"cat","bt","hat","tree"};
int n=words.size();
int i;
string chars="atach";
int count=0;
int n1=chars.length();
for(i=0;i<n;i++)
{
string w=words[i];
int q=w.length();
int k;
int j;
unordered_map<int,int>mpp;
for(j=0;j<n1;j++)
{
mpp[chars[j]]++;
}
for(k=0;k<q;k++)
{
if(mpp.find(w[k])==mpp.end())
{
break;
}
else
{
mpp[w[k]]--;
}
}
if(k==q)
{
count=count+q;
}
}
cout<<"COUNT :- "<<count<<" "<<endl;
return 0;
}