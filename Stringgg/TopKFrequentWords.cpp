#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;
int main()
{
vector<string>words={"i","love","leetcode","i","love","coding"};
int k;
cout<<"enter k";
cin>>k;
int n=words.size();
unordered_map<string,int>mpp;
for(int i=0;i<words.size();i++)
{
mpp[words[i]]++;
}
for(auto i : mpp)
{
cout<<" "<<i.first<<" "<<i.second;
}
vector<vector<string>>buckets(n+1);
for(auto i : mpp)
{
buckets[i.second].push_back(i.first);
}
for(int i=1;i<=n;i++)
{
sort(buckets[i].begin(),buckets[i].end());
}
for(int i=1;i<=n;i++)
{
for(string s:buckets[i])
{
cout<<s<<" ";
}
}
vector<string>ans;
for(int i=n;i>=0&&ans.size()<k;i++)
{
for(string s : buckets[i])
{
ans.push_back(s);
if(ans.size()==k)
{
break;
}
}
}
return 0;
}