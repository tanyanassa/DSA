#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="cbaebbacd";
vector<int>answer;
int n=s.length();
string p="abc";
int m=p.length();
unordered_map<char,int>mpp1;
unordered_map<char,int>mpp;
int i;
for(i=0;i<m;i++)
mpp1[p[i]]++;
for(i=0;i<m;i++)
{
mpp[s[i]]++;
}
if(mpp==mpp1)
answer.push_back(i-m);
for(i=m;i<n;i++)
{
mpp[s[i]]++;
mpp[s[i-m]]--;
if(mpp[s[i-m]]==0)
mpp.erase(s[i-m]);
if(mpp==mpp1)
answer.push_back(i-m);
}
for(auto i : answer)
cout<<i<<" ";
return 0;
}