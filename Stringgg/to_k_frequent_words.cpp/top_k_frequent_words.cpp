#include<bits/stdc++.h>
using namespace std;
bool compare(pair<string,int>a,pair<string,int>b)
{
if(a.second==b.second)
{
if(a.first<b.first)
{return true;}
}
if(a.second>b.second)
return true;
else
return false;
}
int main()
{
vector<string>words={"i","love","leetcode","i","love","coding"};
int n=words.size();
int i;
unordered_map<string,int>mpp;
for(i=0;i<n;i++)
{
mpp[words[i]]++;
}
vector<pair<string,int>>v(mpp.begin(),mpp.end());
sort(v.begin(),v.end(),compare);
for(auto i : v)
cout<<i.first<<" "<<i.second<<" "<<endl;
int k=2;
int n1=v.size();
vector<string>answer;
int j;
for(j=0;j<k;j++)
{answer.push_back(v[j].first);}
for(auto i : answer)
cout<<i;
return 0;
}