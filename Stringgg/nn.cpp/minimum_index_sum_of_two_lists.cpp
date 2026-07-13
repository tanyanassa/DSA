#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string>answer;
vector<string>words1={"happy","sad","good"};
vector<string>words2={"sad","happy","good"};
int n1=words1.size();
int n2=words2.size();
int minimum_sum=INT_MAX;
int i;
unordered_map<string,vector<int>>mpp;
for(i=0;i<n1;i++)
{
mpp[words1[i]].push_back(i);
}
for(i=0;i<n2;i++)
{
mpp[words2[i]].push_back(i);
}
for(auto i : mpp)
{
int sum=0;
/*cout<<i.first<<" ";
for(auto j : i.second)
cout<<j<<" ";
cout<<endl;*/
if(i.second.size()>1)
{
for(auto j : i.second)
{sum=sum+j;
}
if(sum==minimum_sum)
{
answer.push_back(i.first);
}
if(sum<minimum_sum)
{
minimum_sum=sum;
answer.push_back(i.first);
}
}
}
cout<<"Minimum Sum :- "<<endl;
cout<<minimum_sum<<" ";
cout<<"Answer String :- "<<endl;
for(auto i : answer)
cout<<i;
return 0;
}
